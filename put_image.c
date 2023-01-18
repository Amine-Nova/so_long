/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:07:53 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/17 15:47:27 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_gen(int keycode, t_data *data)
{
	int	i;

	i = 0;
	if (keycode == 124)
		move_player2(data);
	if (keycode == 53)
		exit(0);
	if (keycode == 123)
		move_player3(data);
	if (keycode == 125)
		move_player(data);
	if (keycode == 126)
		move_player1(data);
	return (0);
}

void	img_set(t_data *data)
{
	data->img
		= mlx_xpm_file_to_image(data->mlx, "images/1.xpm", &data->w, &data->h);
	data->img1
		= mlx_xpm_file_to_image(data->mlx, "images/0.xpm", &data->w, &data->h);
	data->img2
		= mlx_xpm_file_to_image(data->mlx, "images/PR.xpm", &data->w, &data->h);
	data->img3
		= mlx_xpm_file_to_image(data->mlx, "images/C.xpm", &data->w, &data->h);
	data->img4
		= mlx_xpm_file_to_image(data->mlx, "images/E.xpm", &data->w, &data->h);
}

void	img_put(t_data *a)
{
	a->i = 0;
	while (a->str[a->i])
	{
		a->j = -1;
		while (a->str[a->i][++a->j])
		{
			if (a->str[a->i][a->j] == '0' || a->str[a->i][a->j] == 'P'
				|| a->str[a->i][a->j] == 'E' || a->str[a->i][a->j] == 'C')
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
		a->i++;
	}
}
