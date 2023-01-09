/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:06:31 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/09 15:39:39 by abenmous         ###   ########.fr       */
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

typedef struct s_data
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
void	ft_putchar(int c);
int 	move_player(int key_code, t_data *data);
char	*get_next_line(int fd);
char	*my_strjoin(char *str1, char *str2);
void	*my_calloc(size_t count, size_t size);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*my_strchr(char *s, int c);
char	*my_strdup(char *src1);
size_t	my_strlen(char *s);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

#endif
