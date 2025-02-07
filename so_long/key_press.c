/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:47:43 by bozil             #+#    #+#             */
/*   Updated: 2025/02/07 11:13:26 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void move_player(t_game *game, int dx, int dy)
{
    int new_x = game->player_x + dx;
    int new_y = game->player_y + dy;

    if (game->map[new_y][new_x] == '1')
        return;
    
    if (game->map[new_y][new_x] == 'C')
        game->collectibles--;
    
    if (game->map[new_y][new_x] == 'E' && game->collectibles == 0)
    {
        ft_printf("Squack is safe now! You won!\n");
        exit_game(game);
    }

    game->map[game->player_y][game->player_x] = '0';
    game->player_x = new_x;
    game->player_y = new_y;
    game->map[new_y][new_x] = 'P';
    game->moves++;
    ft_printf("Moves: %d\n", game->moves);

    if (dx == 1)
        game->player_sprite = game->elements.player_right;
    else if (dx == -1)
        game->player_sprite = game->elements.player_left;
    else if (dy == 1)
        game->player_sprite = game->elements.player_down;
    else if (dy == -1)
        game->player_sprite = game->elements.player_up;
}

int key_press(int keycode, t_game *game)
{
    if (keycode == 65307) /*ESC*/
        exit_game(game);
    else if (keycode == 119) /*W*/
        move_player(game, 0, -1);
    else if (keycode == 115) /*S*/
        move_player(game, 0, 1);
    else if (keycode == 97) /*A*/
        move_player(game, -1, 0);
    else if (keycode == 100) /*D*/
        move_player(game, 1, 0);
    return (0);
}
