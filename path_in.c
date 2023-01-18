/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:40:48 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/17 21:28:32 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_map(char *map)
{
	t_vdata	*data;

	data->str = NULL;
	data->fd = open(map, O_RDONLY);
	data->line = get_next_line(data->fd);
	while (data->line)
	{
		data->str = my_strjoin(data->str, data->line);
		free(data->line);
		data->line = get_next_line(data->fd);
	}
	data->ptr = ft_split(data->str, '\n');
	free(data->str);
	player_pos2(data);
	path_set(data);
	path_set1(data);
	path_set2(data);
	path_final(data);
	path_final(data);
	check_exit(data);
}

void	player_pos2(t_vdata *data)
{
	data->i = 1;
	while (data->ptr[data->i])
	{
		data->j = 1;
		while (data->ptr[data->i][data->j])
		{
			if (data->ptr[data->i][data->j] == 'P')
			{
				data->player2_x = data->i;
				data->player2_y = data->j;
			}
			data->j++;
		}
		data->i++;
	}
}
