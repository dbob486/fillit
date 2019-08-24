/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 20:14:20 by kilkim            #+#    #+#             */
/*   Updated: 2019/08/22 16:48:46 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct	s_node
{
	char			**unit;
	char			sign;
	int				x_max;
	int				y_max;
	struct s_node	*pre;
	struct s_node	*next;
}				t_node;

typedef struct	s_map
{
	char			**board;
	int				board_size;
}				t_map;

int				valid_check1(char *str);
int				valid_check2(char *str);
t_node			*open_read(char *file);
t_node			*is_valid(int fd);

int				upper_left(char *str);
char			*set_str(char *str);
char			**node_frame(int c);
t_node			*make_node(t_node *tet_list);
t_node			*tet_node(t_node *tet_list, char *str);

void			node_rev(t_node *tet_list);
void			max_x_y(t_node *tet_list);
void			tet_trim(t_node *tet_list);
void			tet_set_node(t_node *tet_list);
char			**tet_trim_frame(t_node *tet_list);

int				map_size_check1(t_node *tet_list);
int				map_size_check2(t_node *tet_list);
int				min_map_size(t_node *tet_list);
t_map			*create_board(int size);

t_map			*board_main(t_node *tet_list, int size);
int				board_check(t_map *tet_map, t_node *tet_list, int i, int j);
int				board_solver(t_node *tet_list, t_map *tet_map);
void			board_write(t_map *tet_map, t_node *tet_list, int i, int j);
void			del_write(t_map *tet_map, t_node *tet_list);

void			unit_free(t_node *tet_list);
void			board_free(t_map *tet_map);
void			tetris_free(t_node *tet_list);
void			whole_free(t_map *tet_map, t_node *tet_list);

int				main(int ac, char **av);

#endif
