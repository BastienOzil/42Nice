/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:13:04 by bozil             #+#    #+#             */
/*   Updated: 2024/09/28 10:13:09 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

void	read_and_search(int fd, char *numbers, char *donnees, char *retours);
char	*parse(char *donnees);
void	swap(char *a, char *b);
int		ft_strlen(char *str);
void	rev_tab(char *str);
int		power(int n, int i);
int		*ft_trsf(char *str);
void	help_split(int i, char *dest, char *src);
char	*split(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcpy2(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
void	print_error(char *msg);
void	process_numbers(char *numbers);
char	*ft_string(int *i, int *j, char *result, char *str);
int		main(int argc, char **argv);

#endif
