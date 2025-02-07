/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:43:22 by bozil             #+#    #+#             */
/*   Updated: 2025/02/07 11:36:27 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"
# include "minilibx-linux/mlx.h"

typedef struct s_elements
{
    void    *wall;
    void    *floor;
    void    *player;
    void    *collectible;
    void    *exit;
    void    *player_up;
    void    *player_down;
    void    *player_right;
    void    *player_left;
}   t_elements;

typedef struct s_game
{
    void    *mlx;
    void    *win;
    void    *player_sprite;
    char    **map;
    int     moves;
    int     width;
    int     height;
    int     collectibles;
    int     player_x;
    int     player_y;
    t_elements  elements;
}   t_game;



int     parse_map(char *mapdata, t_game *game);
int     check_map(t_game *game);
void    start_game(t_game *game);
void    load_elements(t_game *game);
void    render_map(t_game *game);
void    exit_game(t_game *game);
void    free_map(t_game *game);

#endif
