/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:07:53 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/11 17:09:38 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int key_gen(int keycode, t_data *data)
{
	
	if(keycode == 124)
		move_player2(data);
	if (keycode == 53)
		exit(0);
	if(keycode == 123)
		move_player3(data);
	if(keycode == 125)
		move_player(data);
	if(keycode == 126)
		move_player1(data);
	return(0);
}

void img_set(t_data *data)
{
	data->img = mlx_xpm_file_to_image(data->mlx, "peakpx.xpm", &data->w, &data->h);
    data->img1 = mlx_xpm_file_to_image(data->mlx, "snow01-_1_.xpm", &data->w, &data->h);
    data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_1_-removebg-preview.xpm", &data->w, &data->h);
    data->img3 = mlx_xpm_file_to_image(data->mlx, "snow01-_1_-_1_.xpm", &data->w, &data->h);
    data->img4 = mlx_xpm_file_to_image(data->mlx, "snow01-_1_-overlay.xpm", &data->w, &data->h);
}

void img_put(t_data *data)
{
	data->i = 0;
    data->j = 0;
    while(data->str[data->i])
    {
        data->j = 0;
        while(data->str[data->i][data->j])
        {
            if(data->str[data->i][data->j] == '0' || data->str[data->i][data->j] == 'P' 
			|| data->str[data->i][data->j] == 'E' || data->str[data->i][data->j] == 'C')
            	mlx_put_image_to_window(data->mlx, data->mlx_win, data->img1, data->j * 50, data->i * 50);
			if(data->str[data->i][data->j] == 'P')
				mlx_put_image_to_window(data->mlx, data->mlx_win, data->img2, data->j * 50, data->i * 50);
			if(data->str[data->i][data->j] == 'E')
				mlx_put_image_to_window(data->mlx, data->mlx_win, data->img4, data->j * 50, data->i * 50);
			if(data->str[data->i][data->j] == 'C')
				mlx_put_image_to_window(data->mlx, data->mlx_win, data->img3, data->j * 50, data->i * 50);
			if(data->str[data->i][data->j] == '1')
				mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, data->j * 50, data->i * 50);
			data->j++;
		}
		data->i++;
    }
}