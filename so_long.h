/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:06:31 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/21 21:55:34 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4

# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>
# include "printf/ft_printf.h"
# include "get_next_line/get_next_line.h"

struct	s_v
{
	int		l;
	int		i;
	int		j;
	int		len;
	int		u;
	char	*str;
};

typedef struct p_data
{
	char	**ptr;
	char	**str;
	char	*line;
	int		fd;
	int		i;
	int		j;	
	int		player2_x;
	int		player2_y;
}	t_vdata;

typedef struct s_data
{
	int		player_x;
	int		player_y;
	int		exit_x;
	int		exit_y;
	char	*line;
	char	**str;
	char	**ptr;
	char	*str0;
	int		h;
	int		w;
	int		i;
	int		a;
	int		b;
	int		fd;
	int		j;
	int		c;
	int		n;
	int		counter;
	void	*mlx;
	void	*mlx_win;
	void	*img;
	void	*img1;
	void	*img2;
	void	*img3;
	void	*img4;
}		t_data;

void	my_check0(char **s, int len);
void	my_check(char **s, int len);
void	my_check2(char **s, int len);
void	my_check3(char **s, int len);
void	my_check4(char **s, int len);
void	map_check(t_data *data, char *map);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	img_put(t_data *data);
void	img_set(t_data *data);
int		key_gen(int keycode, t_data *data);
void	get_player_pos(t_data *data);
void	move_player(t_data *data);
void	move_player1(t_data *data);
void	move_player2(t_data *data);
void	move_player3(t_data *data);
void	coin_count(t_data *data);
void	get_door_pos(t_data *data);
void	change_door(t_data *data);
void	put_map(char **map);
void	player_pos2(t_vdata *data);
void	path_set(t_vdata *data);
void	path_set0(t_vdata *data);
void	path_set1(t_vdata *data);
void	path_set2(t_vdata *data);
void	path_final(t_vdata *data);
void	path_final1(t_vdata *data);
void	path_final2(t_vdata *data);
void	check_exit(t_vdata *data);
void	move_pd(t_data *data);
void	move_pd1(t_data *data);
void	move_pd2(t_data *data);
void	move_pd3(t_data *data);
void	win_init(t_data *data);
void	check_square(char **str, t_data *data);
void	check_other(t_data *data);
void	error_write1(void);
void	error_write0(t_data *data);
int		wide_c(char **s);
void	free_map(char **str);

#endif
