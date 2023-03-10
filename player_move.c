/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:10:27 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/23 16:09:48 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	move_player(t_data *data)
{
	get_player_pos(data);
	get_door_pos(data);
	if (data->str[data->player_x + 1][data->player_y] == '1')
	{
		if (data->str[data->player_x][data->player_y] ==
			data->str[data->exit_x][data->exit_y])
		data->img2 = mlx_xpm_file_to_image
				(data->mlx, "textures/player_d+d.xpm", &data->w, &data->h);
		else
		data->img2 = mlx_xpm_file_to_image
				(data->mlx, "textures/PD.xpm", &data->w, &data->h);
		img_put(data);
		return ;
	}
	move_pd(data);
	if (data->str[data->player_x][data->player_y] == 'P')
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x + 1][data->player_y] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "textures/PD.xpm", &data->w, &data->h);
	}
	ft_printf("Move : %d\n", data->counter++);
	change_door(data);
	img_put(data);
}

void	move_player1(t_data *data)
{
	get_player_pos(data);
	get_door_pos(data);
	if (data->str[data->player_x - 1][data->player_y] == '1')
	{
		if (data->str[data->player_x][data->player_y] ==
			data->str[data->exit_x][data->exit_y])
			data->img2 = mlx_xpm_file_to_image
				(data->mlx, "textures/player_up+door.xpm", &data->w, &data->h);
		else
		data->img2 = mlx_xpm_file_to_image
				(data->mlx, "textures/PU.xpm", &data->w, &data->h);
		img_put(data);
		return ;
	}
	move_pd1(data);
	if (data->str[data->player_x][data->player_y] == 'P')
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x - 1][data->player_y] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "textures/PU.xpm", &data->w, &data->h);
	}
	ft_printf("Move : %d\n", data->counter++);
	change_door(data);
	img_put(data);
}

void	move_player2(t_data *data)
{
	get_player_pos(data);
	get_door_pos(data);
	if (data->str[data->player_x][data->player_y + 1] == '1')
	{
		if (data->str[data->player_x][data->player_y] ==
			data->str[data->exit_x][data->exit_y])
			data->img2 = mlx_xpm_file_to_image
				(data->mlx, "textures/player_r+d.xpm", &data->w, &data->h);
		else
		data->img2 = mlx_xpm_file_to_image
				(data->mlx, "textures/PR.xpm", &data->w, &data->h);
		img_put(data);
		return ;
	}
	move_pd2(data);
	if (data->str[data->player_x][data->player_y] == 'P')
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x][data->player_y + 1] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "textures/PR.xpm", &data->w, &data->h);
	}
	ft_printf("Move : %d\n", data->counter++);
	change_door(data);
	img_put(data);
}

void	move_player3(t_data *data)
{
	get_player_pos(data);
	get_door_pos(data);
	if (data->str[data->player_x][data->player_y - 1] == '1')
	{
		if (data->str[data->player_x][data->player_y] ==
			data->str[data->exit_x][data->exit_y])
			data->img2 = mlx_xpm_file_to_image
				(data->mlx, "textures/player_l+d.xpm", &data->w, &data->h);
		else
		data->img2 = mlx_xpm_file_to_image
				(data->mlx, "textures/PL.xpm", &data->w, &data->h);
		img_put(data);
		return ;
	}
	move_pd3(data);
	if (data->str[data->player_x][data->player_y] == 'P')
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x][data->player_y - 1] = 'P';
		data->img2 = mlx_xpm_file_to_image
			(data->mlx, "textures/PL.xpm", &data->w, &data->h);
	}
	ft_printf("Move : %d\n", data->counter++);
	change_door(data);
	img_put(data);
}
