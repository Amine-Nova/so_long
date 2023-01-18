/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:59:47 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/18 16:24:10 by abenmous         ###   ########.fr       */
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
	data->mlx_win = mlx_new_window(data->mlx, data->w, data->h, "iceburg");
	get_player_pos(data);
	img_set(data);
	img_put(data);
}

void	map_check(t_data *data, char *map)
{
	char	*str;
	char	*line;
	int		fd;
	int		i;
	int		j;

	str = NULL;
	fd = open(map, O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		str = my_strjoin(str, line);
		free(line);
		line = get_next_line(fd);
	}
	data->str = ft_split(str, '\n');
	j = 0;
	i = ft_strlen(data->str[j]);
	free(str);
	check_other(data);
	my_check(data->str, i);
	my_check2(data->str, i);
	my_check3(data->str, i);
	my_check4(data->str, i);
	check_square(data->str);
}

void	check_square(char **str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (str[i++])
		j++;
	i = 1;
	while (str[i])
	{
		if (ft_strlen(str[0]) != ft_strlen(str[i]))
			exit(1);
		i++;
	}
}
