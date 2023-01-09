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
    data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_1_-removebg-preview.xpm", &data->w, &data->h);
    data->img3 = mlx_xpm_file_to_image(data->mlx, "snow01-_1_-_1_.xpm", &data->w, &data->h);
    data->img4 = mlx_xpm_file_to_image(data->mlx, "snow01-_1_-overlay.xpm", &data->w, &data->h);
    put_image1(data);
    put_image0(data);
    put_image2(data);
    put_image3(data);
    put_image4(data);
    
    
}
void    map_check(t_data *data)
{
    char *str;
    char *line;
    int fd;
    int i;
    int j;
    str = NULL;
    fd = open("map.ber", O_RDONLY);
    line = get_next_line(fd);
    while(line) 
    {
        str = my_strjoin(str, line);
        line = get_next_line(fd);
    }
    data->str = ft_split(str, '\n');
    j = 0;
    i = ft_strlen(data->str[j]);
    my_check(data->str, i);
    my_check2(data->str, i);
    my_check3(data->str, i);
    my_check4(data->str, i);
}

int main()
{
    t_data data;
    map_check(&data);
    window_set(&data);
    mlx_loop(data.mlx);
}
