/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:26:02 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/17 16:14:18 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_pd(t_data *data)
{
	get_door_pos(data);
	get_player_pos(data);
	if (data->str[data->player_x][data->player_y] ==
			data->str[data->exit_x][data->exit_y])
	{
		data->str[data->player_x][data->player_y] = 'E';
		data->str[data->player_x + 1][data->player_y] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "images/PD.xpm", &data->w, &data->h);
	}
	if (data->str[data->player_x + 1][data->player_y] == 'E')
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x + 1][data->player_y] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "images/player_down+door.xpm", &data->w, &data->h);
	}
}

void	move_pd1(t_data *data)
{
	get_door_pos(data);
	get_player_pos(data);
	if (data->str[data->player_x][data->player_y] ==
			data->str[data->exit_x][data->exit_y])
	{
		data->str[data->player_x][data->player_y] = 'E';
		data->str[data->player_x - 1][data->player_y] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "images/PU.xpm", &data->w, &data->h);
	}
	if (data->str[data->player_x - 1][data->player_y] == 'E')
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x - 1][data->player_y] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "images/player_up+door.xpm", &data->w, &data->h);
	}
}

void	move_pd2(t_data *data)
{
	get_door_pos(data);
	get_player_pos(data);
	if (data->str[data->player_x][data->player_y] ==
			data->str[data->exit_x][data->exit_y])
	{
		data->str[data->player_x][data->player_y] = 'E';
		data->str[data->player_x][data->player_y + 1] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "images/PR.xpm", &data->w, &data->h);
	}
	if (data->str[data->player_x][data->player_y + 1] == 'E')
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x][data->player_y + 1] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "images/player_right+door.xpm", &data->w, &data->h);
	}
}

void	move_pd3(t_data *data)
{
	get_door_pos(data);
	get_player_pos(data);
	if (data->str[data->player_x][data->player_y] ==
			data->str[data->exit_x][data->exit_y])
	{
		data->str[data->player_x][data->player_y] = 'E';
		data->str[data->player_x][data->player_y - 1] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "images/PL.xpm", &data->w, &data->h);
	}
	if (data->str[data->player_x][data->player_y - 1] == 'E')
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x][data->player_y - 1] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "images/player_left+door.xpm", &data->w, &data->h);
	}
}
