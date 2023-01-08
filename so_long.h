/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:06:31 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/07 17:32:50 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4

# endif
struct v
{
	int l;
	int i;
	int j;
	int len;
	int u;
};

typedef struct
{
	char **str;
	int i;
	int j;
	int w;
	int h;
	void *mlx;
	void *mlx_win;
	void *img;
	void *img1;
	void *img2;
	void *img3;
	void *img4;
}		t_data;

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>
#include"libft.h"
#include"get_next_line.h"

void my_check(char **s, int len);
void my_check1(char **s, int len);
void my_check2(char **s, int len);
void my_check3(char **s, int len);
void my_check4(char **s, int len);
char**map_check();
void put_image1(void *mlx, void *mlx_win, void *img);
void put_image0(void *mlx, void *mlx_win, void *img1);
void put_image2(void *mlx, void *mlx_win, void *img2);
void put_image3(void *mlx, void *mlx_win, void *img3);
void put_image4(void *mlx, void *mlx_win, void *img4);
void window_set(t_data *data);


#endif
