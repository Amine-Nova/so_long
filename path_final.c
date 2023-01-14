/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_final.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:26:50 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/14 11:38:45 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void path_final(h_data *data)
{
    data->i = 1;

    while(data->ptr[data->i + 1])
    {
        data->j = 1;
        while(data->ptr[data->i][data->j])
        {
            if(data->ptr[data->i][data->j] == '5' && data->ptr[data->i][data->j + 1] != '1')
                data->ptr[data->i][data->j + 1] = '5';
            data->j++;
        }
        data->i++;
    }
    path_final1(data);
	path_final2(data);
    path_final3(data);
}
void path_final1(h_data *data)
{
    data->i = 1;
    while(data->ptr[data->i + 1])
    {
        data->j = ft_strlen(data->ptr[0]) - 1;
        while(data->ptr[data->i][data->j])
        {
            if(data->ptr[data->i][data->j] == '5' && data->ptr[data->i][data->j - 1] != '1')
                data->ptr[data->i][data->j - 1] = '5';
            data->j--;
        }
        data->i++;
    }
}

void path_final2(h_data *data)
{
    data->i = 1;
    while(data->ptr[data->i + 1])
    {
        data->j = 1;
        while(data->ptr[data->i][data->j])
        {
            if(data->ptr[data->i][data->j] == '5' && data->ptr[data->i + 1][data->j] != '1')
                data->ptr[data->i + 1][data->j] = '5';
            data->j++;
        }
        data->i++;
    }
}

void path_final3(h_data *data)
{
	int k;

	k = 0;
	while(data->ptr[data->i++])
		k++;
	data->i = data->i - 2;
    while(data-> i != 0)
    {
        data->j = 1;
        while(data->ptr[data->i][data->j])
        {
            if(data->ptr[data->i][data->j] == '5' && data->ptr[data->i - 1][data->j] != '1')
                data->ptr[data->i - 1][data->j] = '5';
            data->j++;
        }
        data->i--;
    }
    int i;
    i = 0;
}

void check_exit(h_data *data)
{
    int i;
    int j;

    i = 0;
    while(data->ptr[i])
    {
        j = 0;
        while(data->ptr[i][j])
        {
            if(data->ptr[i][j] == 'E' || data->ptr[i][j] == 'C')
                exit(1);
            j++;
        }
        i++;
    }
}