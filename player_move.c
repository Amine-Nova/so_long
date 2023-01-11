/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:10:27 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/12 00:55:10 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void move_player(t_data *data)
{
	get_player_pos(data);
	coin_count(data);
	if (data->str[data->player_x + 1][data->player_y] == '1')
		{
			data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_1_.xpm", &data->w, &data->h);
			img_put(data);
			return ;
		}
	if(data->str[data->player_x + 1][data->player_y] == 'E' &&  data->c == 0)
		exit(1);
	if(data->str[data->player_x + 1][data->player_y] == 'E' &&  data->c != 0)
	{
		data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_1_.xpm", &data->w, &data->h);
		data->str[data->player_x][data->player_y] = 'P';
		data->str[data->player_x + 1][data->player_y] = 'E';
	}
	else
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x + 1][data->player_y] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_1_.xpm", &data->w, &data->h);
	}
	img_put(data);
}

void move_player3(t_data *data)
{
	get_player_pos(data);
	coin_count(data);
	if (data->str[data->player_x][data->player_y - 1] == '1')
	{
		data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_2_.xpm", &data->w, &data->h);
		img_put(data);
		return ;
	}
	if(data->str[data->player_x][data->player_y - 1] == 'E' &&  data->c == 0)
		exit(1);
	if(data->str[data->player_x][data->player_y - 1] == 'E' &&  data->c != 0)
	{
		data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_2_.xpm", &data->w, &data->h);
		data->str[data->player_x][data->player_y] = 'P';
		data->str[data->player_x][data->player_y - 1] = 'E';
	}
	else
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x][data->player_y - 1] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_2_.xpm", &data->w, &data->h);
	}
	img_put(data);
}

void move_player2(t_data *data)
{
	get_player_pos(data);
	coin_count(data);
	if (data->str[data->player_x][data->player_y + 1] == '1')
	{
		data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_1_-removebg-preview.xpm", &data->w, &data->h);
		img_put(data);
		return ;
	}
	if(data->str[data->player_x][data->player_y + 1] == 'E' &&  data->c == 0)
		exit(1);
	if(data->str[data->player_x][data->player_y + 1] == 'E' &&  data->c != 0)
	{
		data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_1_-removebg-preview.xpm", &data->w, &data->h);
		data->str[data->player_x][data->player_y] = 'P';
		data->str[data->player_x][data->player_y + 1] = 'E';
	}
	else
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x][data->player_y + 1] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_1_-removebg-preview.xpm", &data->w, &data->h);
	}
	img_put(data);
}

void move_player1(t_data *data)
{
	get_player_pos(data);
	coin_count(data);
	if (data->str[data->player_x - 1][data->player_y] == '1')
	{
		data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_3_.xpm", &data->w, &data->h);
		img_put(data);
		return ;
	}
	if(data->str[data->player_x - 1][data->player_y] == 'E' &&  data->c == 0)
		exit(1);
	if(data->str[data->player_x - 1][data->player_y] == 'E' &&  data->c != 0)
	{
		data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_3_.xpm", &data->w, &data->h);
		data->str[data->player_x][data->player_y] = 'P';
		data->str[data->player_x - 1][data->player_y] = 'E';
	}
	else
	{
		data->str[data->player_x][data->player_y] = '0';
		data->str[data->player_x - 1][data->player_y] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_3_.xpm", &data->w, &data->h);
	}
	img_put(data);
}