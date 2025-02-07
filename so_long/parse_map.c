/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:47:20 by bozil             #+#    #+#             */
/*   Updated: 2025/02/07 11:34:02 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int count_lines(char *mapdata)
{
    int     fd;
    int     lines;
    char    *line;

    fd = open(mapdata, O_RDONLY);
    if (fd < 0)
        return (-1);
    lines = 0;
    while ((line = get_next_line(fd)))
    {
        lines++;
        free(line);
    }
    close(fd);
    return (lines);
}

int parse_map(char *mapdata, t_game *game)
{
    int     fd;
    int     i;

    game->height = count_lines(mapdata);
    if (game->height <= 0)
        return (0);
    game->map = malloc(sizeof(char *) * (game->height + 1));
    if (!game->map)
        return (0);
    fd = open(mapdata, O_RDONLY);
    if (fd < 0)
        return (0);
    i = 0;
    while (i < game->height)
    {
        game->map[i] = get_next_line(fd);
        if (!game->map[i])
            return (0);
        i++;
    }
    game->map[i] = NULL;
    close(fd);
    if (!check_map(game))
    {
        free_map(game);
        return (0);
    }
    return (1);
}