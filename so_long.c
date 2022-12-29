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

void window_set(t_data *data)
{
    data->w = 500;
    data->h = 500;
    data->mlx = mlx_init();
    data->mlx_win = mlx_new_window(data->mlx, 1700, 300, "a feeen adataat");
    data->img = mlx_xpm_file_to_image(data->mlx, "peakpx.xpm", &data->w, &data->h);
    mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, data->w, data->h);
    mlx_loop(data->mlx);
}
int main()
{
    t_data data;
    map_check();
    window_set(&data);
}
