/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:39:44 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/23 18:14:55 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error_write1(char *s)
{
	ft_printf("%s", s);
	exit(1);
}

int	error_write0(t_data *data)
{
	mlx_destroy_image(data->mlx, data->img);
	mlx_destroy_image(data->mlx, data->img1);
	mlx_destroy_image(data->mlx, data->img2);
	mlx_destroy_image(data->mlx, data->img3);
	mlx_destroy_image(data->mlx, data->img4);
	mlx_destroy_window(data->mlx, data->mlx_win);
	free(data->mlx);
	free_map(data->str);
	exit(0);
	return (0);
}

void	exit_image(t_data *data, char *s)
{
	mlx_destroy_window(data->mlx, data->mlx_win);
	free(data->mlx);
	free_map(data->str);
	ft_printf("%s", s);
	exit(1);
}

void	check_other(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->str[i])
	{
		j = 0;
		while (data->str[i][j])
		{
			if (data->str[i][j] != 'E' && data->str[i][j] != '1'
			&& data->str[i][j] != '0' && data->str[i][j] != 'C'
			&& data->str[i][j] != 'P')
			{
				free_map(data->str);
				error_write1("Error\nThere is a difference caractere");
			}
			j++;
		}
		i++;
	}
	check_square(data->str, data);
}

void	change_door(t_data *data)
{
	coin_count(data);
	if (data->c == 0)
	{
		data->img4 = mlx_xpm_file_to_image
			(data->mlx, "textures/open_door.xpm", &data->w, &data->h);
		img_put(data);
	}
}
