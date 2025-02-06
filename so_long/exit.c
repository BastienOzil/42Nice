/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:47:13 by bozil             #+#    #+#             */
/*   Updated: 2025/02/06 08:54:25 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void free_elements(t_game *game)
{
    mlx_destroy_image(game->mlx, game->elements.wall);
    mlx_destroy_image(game->mlx, game->elements.floor);
    mlx_destroy_image(game->mlx, game->elements.player_up);
    mlx_destroy_image(game->mlx, game->elements.player_down);
    mlx_destroy_image(game->mlx, game->elements.player_left);
    mlx_destroy_image(game->mlx, game->elements.player_right);
    mlx_destroy_image(game->mlx, game->elements.collectible);
    mlx_destroy_image(game->mlx, game->elements.exit);
}


void exit_game(t_game *game)
{
    free_elements(game);
    mlx_destroy_window(game->mlx, game->win);
    exit(0);
}
