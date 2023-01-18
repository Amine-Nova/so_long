/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:39:44 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/17 21:33:58 by abenmous         ###   ########.fr       */
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
