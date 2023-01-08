/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:39:18 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/07 20:06:00 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void put_image1(void *mlx, void *mlx_win, void *img)
{
    t_data *data1;
    data1 = malloc(sizeof(t_data));
    data1->str = map_check();
    data1->i = 0;
    data1->j = 0;
    while(data1->str[data1->i])
    {
        data1->j = 0;
        while(data1->str[data1->i][data1->j])
        {
            if(data1->str[data1->i][data1->j] == '1')
            {
                mlx_put_image_to_window(mlx, mlx_win, img, data1->j * 50, data1->i * 50);
                data1->j++;
            }
            else
                data1->j++;
        }
        data1->i++;
    }
}

void put_image0(void *mlx, void *mlx_win, void *img)
{
    t_data *data0;
    data0 = malloc(sizeof(t_data));
    data0->str = map_check();
    data0->i = 0;
    data0->j = 0;
    while(data0->str[data0->i])
    {
        data0->j = 0;
        while(data0->str[data0->i][data0->j])
        {
            if(data0->str[data0->i][data0->j] == '0' || data0->str[data0->i][data0->j] == 'C'  
            || data0->str[data0->i][data0->j] == 'E')
            {
                mlx_put_image_to_window(mlx, mlx_win, img, data0->j * 50, data0->i * 50);
                data0->j++;
            }
            else
                data0->j++;
        }
        data0->i++;
    }
}

void put_image2(void *mlx, void *mlx_win, void *img)
{
    t_data *data2;
    data2 = malloc(sizeof(t_data));
    data2->str = map_check();
    data2->i = 0;
    data2->j = 0;
    while(data2->str[data2->i])
    {
        data2->j = 0;
        while(data2->str[data2->i][data2->j])
        {
            if(data2->str[data2->i][data2->j] == 'P')
            {
                mlx_put_image_to_window(mlx, mlx_win, img, data2->j * 50, data2->i * 50);
                data2->j++;
            }
            else
                data2->j++;
        }
        data2->i++;
    }
}

void put_image3(void *mlx, void *mlx_win, void *img)
{
    t_data *data3;
    data3 = malloc(sizeof(t_data));
    data3->str = map_check();
    data3->i = 0;
    data3->j = 0;
    while(data3->str[data3->i])
    {
        data3->j = 0;
        while(data3->str[data3->i][data3->j])
        {
            if(data3->str[data3->i][data3->j] == 'C')
            {
                mlx_put_image_to_window(mlx, mlx_win, img, data3->j * 50, data3->i * 50);
                data3->j++;
            }
            else
                data3->j++;
        }
        data3->i++;
    }
}
void put_image4(void *mlx, void *mlx_win, void *img)
{
    t_data *data4;
    data4 = malloc(sizeof(t_data));
    data4->str = map_check();
    data4->i = 0;
    data4->j = 0;
    while(data4->str[data4->i])
    {
        data4->j = 0;
        while(data4->str[data4->i][data4->j])
        {
            if(data4->str[data4->i][data4->j] == 'E')
            {
                mlx_put_image_to_window(mlx, mlx_win, img, data4->j * 50, data4->i * 50);
                data4->j++;
            }
            else
                data4->j++;
        }
        data4->i++;
    }
}