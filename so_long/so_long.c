/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:40:32 by bozil             #+#    #+#             */
/*   Updated: 2025/02/06 09:00:45 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
    t_game game;

    if (argc != 2)
    {
        write(2, "Error\nUsage: ./so_long <map.ber>\n", 32);
        return (1);
    }
    if (!parse_map(argv[1], &game))
    {
        write(2, "Error\nInvalid map\n", 18);
        return (1);
    }
    start_game(&game);
    load_textures(&game);
    render_map(&game);
    mlx_loop(game.mlx);
    free_map(&game);
    return (0);
}