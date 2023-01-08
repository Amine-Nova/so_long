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
    data->img2 = mlx_xpm_file_to_image(data->mlx, "X-Men-Character-Set-02-_1_-removebg-preview.xpm", &data->w, &data->h);
    data->img3 = mlx_xpm_file_to_image(data->mlx, "snow01-_1_-_1_.xpm", &data->w, &data->h);
    data->img4 = mlx_xpm_file_to_image(data->mlx, "snow01-_1_-overlay.xpm", &data->w, &data->h);
    put_image1(data->mlx, data->mlx_win, data->img);
    put_image0(data->mlx, data->mlx_win, data->img1);
    put_image2(data->mlx, data->mlx_win, data->img2);
    put_image3(data->mlx, data->mlx_win, data->img3);
    put_image4(data->mlx, data->mlx_win, data->img4);
}
char    **map_check()
{
    char *maj;
    char **maji;
    char *line;
    int i;
    int j;
    int fd;

    maj = NULL;
    fd = open("map.ber", O_RDONLY);
    line = get_next_line(fd);
    while(line) 
    {
        maj = my_strjoin(maj, line);
        line = get_next_line(fd);
    }
    maji = ft_split(maj, '\n');
    j = 0;
    i = ft_strlen(maji[j]);
    my_check(maji, i);
    my_check2(maji, i);
    my_check3(maji, i);
    my_check4(maji, i);
    return(maji);
}