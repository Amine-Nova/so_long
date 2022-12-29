/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:06:31 by abenmous          #+#    #+#             */
/*   Updated: 2022/12/29 20:07:33 by abenmous         ###   ########.fr       */
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
	int w;
	int h;
	void *mlx;
	void *mlx_win;
	void *img;
}		t_data;

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>
#include"libft.h"
#include"get_next_line.h"

void my_check(char **s);
void my_check1(char **s);
void my_check2(char **s);
void my_check3(char **s);
void my_check4(char **s);
void map_check();
void window_set(t_data *data);



#endif
