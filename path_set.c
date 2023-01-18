/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:28:05 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/17 21:32:55 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	path_set0(t_vdata *data)
{
	while (data->ptr[data->player2_x][data->player2_y + 1] != '1')
	{
		if (data->ptr[data->player2_x][data->player2_y + 1] != '1')
			data->ptr[data->player2_x][data->player2_y + 1] = '5';
		data->player2_y++;
	}
}

void	path_set(t_vdata *data)
{
	player_pos2(data);
	while (data->ptr[data->player2_x][data->player2_y - 1] != '1')
	{
		if (data->ptr[data->player2_x][data->player2_y - 1] != '1')
			data->ptr[data->player2_x][data->player2_y - 1] = '5';
		data->player2_y--;
	}
}

void	path_set1(t_vdata *data)
{
	player_pos2(data);
	while (data->ptr[data->player2_x - 1][data->player2_y] != '1')
	{
		if (data->ptr[data->player2_x - 1][data->player2_y] != '1')
			data->ptr[data->player2_x - 1][data->player2_y] = '5';
		data->player2_x--;
	}
}

void	path_set2(t_vdata *data)
{
	player_pos2(data);
	while (data->ptr[data->player2_x + 1][data->player2_y] != '1')
	{
		if (data->ptr[data->player2_x + 1][data->player2_y] != '1')
			data->ptr[data->player2_x + 1][data->player2_y] = '5';
		data->player2_x++;
	}
}
