/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:39:44 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/18 16:54:19 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error_write(void)
{
	write(2, "Error\n", 6);
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
				error_write();
			j++;
		}
		i++;
	}
}

void	change_door(t_data *data)
{
	coin_count(data);
	if (data->c == 0)
	{
		data->img4 = mlx_xpm_file_to_image
			(data->mlx, "images/open_door.xpm", &data->w, &data->h);
		img_put(data);
	}
}
