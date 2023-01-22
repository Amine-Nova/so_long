/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:59:47 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/22 16:25:48 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_player_pos(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->str[i])
	{
		j = 0;
		while (data->str[i][j])
		{
			if (data->str[i][j] == 'P')
			{
				data->player_x = i;
				data->player_y = j;
			}
			j++;
		}
		i++;
	}
}

void	get_door_pos(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->str[i])
	{
		j = 0;
		while (data->str[i][j])
		{
			if (data->str[i][j] == 'E')
			{
				data->exit_x = i;
				data->exit_y = j;
			}
			j++;
		}
		i++;
	}
}

void	win_init(t_data *data)
{
	data->j = 0;
	data->w = ft_strlen(data->str[0]) * 50;
	data->h = 0;
	while (data->str[data->j++])
		data->h++;
	data->h = data->h * 50;
	data->mlx = mlx_init();
	data->mlx_win = mlx_new_window(data->mlx, data->w, data->h, "so_long");
	get_player_pos(data);
	img_set(data);
	img_put(data);
}

void	map_check(t_data *data, char *map)
{
	data->counter = 1;
	data->n = 0;
	data->str0 = NULL;
	data->fd = open(map, O_RDONLY);
	if (data->fd == -1)
		error_write1("Error\nMap Invalid\n");
	data->line = get_next_line(data->fd);
	if (!data->line)
		error_write1("Error\nEmpty Map\n");
	while (data->line && data->n++ >= 0)
	{
		data->str0 = my_strjoin(data->str0, data->line);
		free(data->line);
		data->line = get_next_line(data->fd);
	}
	if (data->str0[ft_strlen(data->str0) - 1] == '\n'
		&& data->str0[ft_strlen(data->str0)] == 0)
		error_write1("Error\nInvalid Map\n");
	data->str = ft_split(data->str0, '\n');
	data->ptr = ft_split(data->str0, '\n');
	data->a = ft_strlen(data->str[0]);
	check_other(data);
	my_check(data->str, data->a);
	check_square(data->str, data);
}

void	check_square(char **str, t_data *data)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (ft_strlen(str[0]) != ft_strlen(str[i]))
		{
			free_map(str);
			error_write1("Error\nLines not Equal\n");
		}
		i++;
	}
	if (data->n != i)
	{
		free_map(str);
		error_write1("Error\nNew Line Error\n");
	}
}
