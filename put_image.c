/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:07:53 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/23 18:16:27 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_gen(int keycode, t_data *data)
{
	change_door(data);
	if (keycode == 2)
		move_player2(data);
	if (keycode == 53)
	{
		free_map(data->str);
		mlx_destroy_image(data->mlx, data->img);
		mlx_destroy_image(data->mlx, data->img1);
		mlx_destroy_image(data->mlx, data->img2);
		mlx_destroy_image(data->mlx, data->img3);
		mlx_destroy_image(data->mlx, data->img4);
		mlx_destroy_window(data->mlx, data->mlx_win);
		free(data->mlx);
		exit(1);
	}
	if (keycode == 0)
		move_player3(data);
	if (keycode == 1)
		move_player(data);
	if (keycode == 13)
		move_player1(data);
	return (0);
}

void	img_set(t_data *data)
{
	data->img = mlx_xpm_file_to_image
		(data->mlx, "textures/1.xpm", &data->w, &data->h);
	data->img1 = mlx_xpm_file_to_image
		(data->mlx, "textures/0.xpm", &data->w, &data->h);
	data->img2 = mlx_xpm_file_to_image
		(data->mlx, "textures/PR.xpm", &data->w, &data->h);
	data->img3 = mlx_xpm_file_to_image
		(data->mlx, "textures/C.xpm", &data->w, &data->h);
	data->img4 = mlx_xpm_file_to_image
		(data->mlx, "textures/E.xpm", &data->w, &data->h);
	img_set1(data);
}

int	ft_cmp(char *s1, char *s2, int len)
{
	int	i;
	int	j;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	while (s1 && s2 && len > 0)
	{
		if (s1[i - 1] == s2[j - 1])
		{
			i--;
			j--;
			len--;
		}
		else
			return (0);
	}
	return (1);
}

void	img_put(t_data *a)
{
	error_image(a);
	a->i = -1;
	while (a->str[++a->i])
	{
		a->j = -1;
		while (a->str[a->i][++a->j])
		{
			if (a->str[a->i][a->j] == '0' || a->str[a->i][a->j] == 'P')
				mlx_put_image_to_window(a->mlx, a->mlx_win,
					a->img1, a->j * 50, a->i * 50);
			if (a->str[a->i][a->j] == 'P')
				mlx_put_image_to_window(a->mlx, a->mlx_win,
					a->img2, a->j * 50, a->i * 50);
			if (a->str[a->i][a->j] == 'E')
				mlx_put_image_to_window(a->mlx, a->mlx_win,
					a->img4, a->j * 50, a->i * 50);
			if (a->str[a->i][a->j] == 'C')
				mlx_put_image_to_window(a->mlx, a->mlx_win,
					a->img3, a->j * 50, a->i * 50);
			if (a->str[a->i][a->j] == '1')
				mlx_put_image_to_window(a->mlx, a->mlx_win,
					a->img, a->j * 50, a->i * 50);
		}
	}
}
