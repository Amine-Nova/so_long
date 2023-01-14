/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:40:48 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/14 11:43:20 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void put_map(char *map)
{
	h_data *data;
    data->str = NULL;
    data->fd = open(map, O_RDONLY);
    data->line = get_next_line(data->fd);
    while(data->line)
    {
        data->str = my_strjoin(data->str, data->line);
        data->line = get_next_line(data->fd);
    }
    data->ptr = ft_split(data->str, '\n');
    player_pos2(data);
    while(data->ptr[data->player2_x][data->player2_y + 1] != '1')
    {
        if(data->ptr[data->player2_x][data->player2_y + 1] != '1')
            data->ptr[data->player2_x][data->player2_y + 1] = '5';
        data->player2_y++;
    }
    path_set(data);
    path_set1(data);
    path_set2(data);
    path_final(data);
    path_final(data);
    check_exit(data);

}
void	player_pos2(h_data *data)
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
void path_set(h_data *data)
{
    player_pos2(data);
    while(data->ptr[data->player2_x][data->player2_y - 1] != '1')
    {
        if(data->ptr[data->player2_x][data->player2_y - 1] != '1')
            data->ptr[data->player2_x][data->player2_y - 1] = '5';
        data->player2_y--;
    }
}
void path_set1(h_data *data)
{
    player_pos2(data);
    while(data->ptr[data->player2_x - 1][data->player2_y] != '1')
    {
        if(data->ptr[data->player2_x - 1][data->player2_y] != '1')
            data->ptr[data->player2_x - 1][data->player2_y] = '5';
        data->player2_x--;
    }
}

void path_set2(h_data *data)
{
    player_pos2(data);
    while(data->ptr[data->player2_x + 1][data->player2_y] != '1')
    {
        if(data->ptr[data->player2_x + 1][data->player2_y] != '1')
            data->ptr[data->player2_x + 1][data->player2_y] = '5';
        data->player2_x++;
    }
}