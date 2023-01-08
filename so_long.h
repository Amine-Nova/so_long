/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:06:31 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/09 00:35:33 by abenmous         ###   ########.fr       */
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

void	my_check(char **s, int len);
void	my_check1(char **s, int len);
void	my_check2(char **s, int len);
void	my_check3(char **s, int len);
void	my_check4(char **s, int len);
void	map_check(t_data *data);
void	put_image1(t_data *data);
void	put_image0(t_data *data);
void	put_image2(t_data *data);
void	put_image3(t_data *data);
void	put_image4(t_data *data);
void	window_set(t_data *data);


#endif
