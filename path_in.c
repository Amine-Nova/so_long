/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:40:48 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/21 21:59:03 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
void	put_map(char **str)
{
	t_vdata	*data;

	data->str = str;
	player_pos2(data);
	path_set(data);
	path_set1(data);
	path_set2(data);
	int i;
	i = 0;
	path_final(data);
	path_final(data);
	check_exit(data);
	while(data->str[i])
	{
		printf("%s\n", data->str[i]);
		i++;
	}
}
void	player_pos2(t_vdata *data)
{
	data->i = 1;
	while (data->str[data->i])
	{
		data->j = 1;
		while (data->str[data->i][data->j])
		{
			if (data->str[data->i][data->j] == 'P')
			{
				data->player2_x = data->i;
				data->player2_y = data->j;
			}
			data->j++;
		}
		data->i++;
	}
}

int	wide_c(char **s)
{
	int	i;
	int	l;

	l = -1;
	i = 0;
	while (s[i++])
		l++;
	return (l);
}

void	free_map(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != NULL)
			free(str[i]);
		i++;
	}
	free(str);
}
