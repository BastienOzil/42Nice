/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:26:32 by bozil             #+#    #+#             */
/*   Updated: 2025/02/05 10:33:11 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int check_walls(t_game *game)
{
    int x;
    int y;

    y = 0;
    while (y < game->height)
    {
        if (game->map[y][0] != '1' || game->map[y][game->width - 1] != '1')
        {
            ft_printf("Error\nMap is not enclosed by walls.\n");
            exit_game(game);
        }
        y++;
    }
    x = 0;
    while (x < game->width)
    {
        if (game->map[0][x] != '1' || game->map[game->height - 1][x] != '1')
        {
            ft_printf("Error\nMap is not enclosed by walls.\n");
            exit_game(game);
        }
        x++;
    }
    return (1);
}

static int check_elements(t_game *game)
{
    int x;
    int y;
    int player = 0, exit = 0, collectibles = 0;

    y = 0;
    while (y < game->height)
    {
        x = 0;
        while (x < game->width)
        {
            if (game->map[y][x] == 'P') player++;
            else if (game->map[y][x] == 'E') exit++;
            else if (game->map[y][x] == 'C') collectibles++;
            x++;
        }
        y++;
    }
    game->collectibles = collectibles;
    if (player != 1 || exit < 1 || collectibles < 1)
    {
        ft_printf("Error\nInvalid map elements: must have 1 player, at least 1 exit, and at least 1 collectible.\n");
        exit_game(game);
    }
    return (1);
}

int check_map(t_game *game)
{
    game->width = ft_strlen(game->map[0]);
    if (!check_walls(game) || !check_elements(game) || !check_path(game))
    {
        ft_printf("Error\nNo valid path exists between player, collectibles, and exit.\n");
        exit_game(game);
    }
    return (1);
}