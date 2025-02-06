/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_elements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:39:48 by bozil             #+#    #+#             */
/*   Updated: 2025/02/06 08:53:32 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void load_elements(t_game *game)
{
    int img_w;
    int img_h;

    game->elements.wall = mlx_xpm_file_to_image(game->mlx, "elements/wall.xpm", &img_w, &img_h);
    game->elements.floor = mlx_xpm_file_to_image(game->mlx, "elements/floor.xpm", &img_w, &img_h);
    game->elements.player_up = mlx_xpm_file_to_image(game->mlx, "elements/player_up.xpm", &img_w, &img_h);
    game->elements.player_down = mlx_xpm_file_to_image(game->mlx, "elements/player_down.xpm", &img_w, &img_h);
    game->elements.player_left = mlx_xpm_file_to_image(game->mlx, "elements/player_left.xpm", &img_w, &img_h);
    game->elements.player_right = mlx_xpm_file_to_image(game->mlx, "elements/player_right.xpm", &img_w, &img_h);
    game->elements.collectible = mlx_xpm_file_to_image(game->mlx, "elements/collectible.xpm", &img_w, &img_h);
    game->elements.exit = mlx_xpm_file_to_image(game->mlx, "elements/exit.xpm", &img_w, &img_h);

    if (!game->elements.wall || !game->elements.floor || !game->elements.player_up ||
        !game->elements.player_down || !game->elements.player_left || !game->elements.player_right ||
        !game->elements.collectible || !game->elements.exit)
    {
        ft_printf("Error\nFailed to load elements.\n");
        exit_game(game);
    }
}

void render_map(t_game *game)
{
    int x, y;

    y = 0;
    while (y < game->height)
    {
        x = 0;
        while (x < game->width)
        {
            void *sprite = game->elements.floor;

            if (game->map[y][x] == '1')
                sprite = game->elements.wall;
            else if (game->map[y][x] == 'P')
                sprite = game->elements.player;
            else if (game->map[y][x] == 'C')
                sprite = game->elements.collectible;
            else if (game->map[y][x] == 'E')
                sprite = game->elements.exit;

            mlx_put_image_to_window(game->mlx, game->win, sprite, x * 32, y * 32);
            x++;
        }
        y++;
    }
}
