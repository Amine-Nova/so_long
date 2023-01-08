/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:39:18 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/09 00:34:43 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void put_image1(t_data *data)
{
    data->i = 0;
    data->j = 0;
    while(data->str[data->i])
    {
        data->j = 0;
        while(data->str[data->i][data->j])
        {
            if(data->str[data->i][data->j] == '1')
            {
                mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, data->j * 50, data->i * 50);
                data->j++;
            }
            else
                data->j++;
        }
        data->i++;
    }
}

void put_image0(t_data *data)
{
    data->i = 0;
    data->j = 0;
    while(data->str[data->i])
    {
        data->j = 0;
        while(data->str[data->i][data->j])
        {
            if(data->str[data->i][data->j] == '0')
            {
                mlx_put_image_to_window(data->mlx, data->mlx_win, data->img1, data->j * 50, data->i * 50);
                data->j++;
            }
            else
                data->j++;
        }
        data->i++;
    }
}

void put_image2(t_data *data)
{

    data->i = 0;
    data->j = 0;
    while(data->str[data->i])
    {
        data->j = 0;
        while(data->str[data->i][data->j])
        {
            if(data->str[data->i][data->j] == 'P')
            {
                mlx_put_image_to_window(data->mlx, data->mlx_win, data->img2, data->j * 50, data->i * 50);
                data->j++;
            }
            else
                data->j++;
        }
        data->i++;
    }
}

void put_image3(t_data *data)
{
    data->i = 0;
    data->j = 0;
    while(data->str[data->i])
    {
        data->j = 0;
        while(data->str[data->i][data->j])
        {
            if(data->str[data->i][data->j] == 'C')
            {
                mlx_put_image_to_window(data->mlx, data->mlx_win, data->img3, data->j * 50, data->i * 50);
                data->j++;
            }
            else
                data->j++;
        }
        data->i++;
    }
}
void put_image4(t_data *data)
{
    data->i = 0;
    data->j = 0;
    while(data->str[data->i])
    {
        data->j = 0;
        while(data->str[data->i][data->j])
        {
            if(data->str[data->i][data->j] == 'E')
            {
                mlx_put_image_to_window(data->mlx, data->mlx_win, data->img4, data->j * 50, data->i * 50);
                data->j++;
            }
            else
                data->j++;
        }
        data->i++;
    }
}