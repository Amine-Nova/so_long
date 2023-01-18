/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_final.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:26:50 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/18 15:39:31 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	path_final(t_vdata *data)
{
	data->i = 1;
	while (data->ptr[data->i + 1])
	{
		data->j = 1;
		while (data->ptr[data->i][data->j])
		{
			if (data->ptr[data->i][data->j] == '5'
				&& data->ptr[data->i][data->j + 1] != '1')
				data->ptr[data->i][data->j + 1] = '5';
			if (data->ptr[data->i][data->j] == '5'
				&& data->ptr[data->i + 1][data->j] != '1')
				data->ptr[data->i + 1][data->j] = '5';
			data->j++;
		}
	data->i++;
	}
	path_final1(data);
	path_final2(data);
}

void	path_final1(t_vdata *data)
{
	data->i = 1;
	while (data->ptr[data->i + 1])
	{
		data->j = ft_strlen(data->ptr[0]) - 1;
		while (data->ptr[data->i][data->j])
		{
			if (data->ptr[data->i][data->j] == '5'
				&& data->ptr[data->i][data->j - 1] != '1')
				data->ptr[data->i][data->j - 1] = '5';
			data->j--;
		}
		data->i++;
	}
}

void	path_final2(t_vdata *data)
{
	int	k;

	k = 0;
	while (data->ptr[data->i++])
		k++;
	data->i = data->i - 2;
	while (data-> i != 0)
	{
		data->j = 1;
		while (data->ptr[data->i][data->j])
		{
			if (data->ptr[data->i][data->j] == '5'
				&& data->ptr[data->i - 1][data->j] != '1')
				data->ptr[data->i - 1][data->j] = '5';
			data->j++;
		}
		data->i--;
	}
}

void	check_exit(t_vdata *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->ptr[i])
	{
		j = 0;
		while (data->ptr[i][j])
		{
			if (data->ptr[i][j] == 'E' || data->ptr[i][j] == 'C')
				exit(1);
			j++;
		}
		free(data->ptr[i]);
		i++;
	}
	free(data->ptr);
}

void	coin_count(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	data->c = 0;
	while (data->str[i])
	{
		j = 0;
		while (data->str[i][j])
		{
			if (data->str[i][j] == 'C')
				data->c++;
			j++;
		}
		i++;
	}
}
