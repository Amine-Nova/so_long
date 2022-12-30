/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long->c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:47:30 by abenmous          #+#    #+#             */
/*   Updated: 2022/12/29 17:50:38 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    window_set(t_data *data)
{
    data->str = map_check();
    data->i = 0;
    data->j = 0;
    data->w = ft_strlen(data->str[data->i]) * 50;
    data->h = 0;
    while(data->str[data->j++])
        data->h++;
    data->h = data->h * 50;
    data->mlx = mlx_init();
    data->mlx_win = mlx_new_window(data->mlx, data->w, data->h, "a feeen adataat");
    data->img = mlx_xpm_file_to_image(data->mlx, "peakpx.xpm", &data->w, &data->h);
    data->img1 = mlx_xpm_file_to_image(data->mlx, "snow01-_1_.xpm", &data->w, &data->h);
    data->img2 = mlx_xpm_file_to_image(data->mlx, "4a6c064c30d2346481000e1cf07ce952-_2_.xpm", &data->w, &data->h);
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
    data->i = 0;
    data->j = 0;
     while(data->str[data->i])
    {
        data->j = 0;
        while(data->str[data->i][data->j])
        {
            if(data->str[data->i][data->j] == '0' || data->str[data->i][data->j] == 'P' 
            || data->str[data->i][data->j] == 'C'  || data->str[data->i][data->j] == 'E')
            {
                mlx_put_image_to_window(data->mlx, data->mlx_win, data->img1, data->j * 50, data->i * 50);
                data->j++;
            }
            else
                data->j++;
        }
        data->i++;
    }
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

int main()
{
    t_data data;
    map_check();
    window_set(&data);
    mlx_loop(data.mlx);
}
