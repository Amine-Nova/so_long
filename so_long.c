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

void coin_count(t_data *data)
{
    int i;
    int j;

    i = 0;
    j = 0;
    data->c = 0;
    while(data->str[i])
    {
        j = 0;
        while(data->str[i][j])
        {
            if(data->str[i][j] == 'C')
                data->c++;
            j++;
        }
        i++;
    }
}
void get_player_pos(t_data *data)
{
    int i;
    int j;

    i = 0;
    while (data->str[i])
    {
        j = 0;
        while (data->str[i][j])
        {
            if (data->str[i][j] == 'P')
            {
                data->player_x = i;
                data->player_y = j;
            }
            j++;
        }
        i++;
    }
}

void get_coin_pos(t_data *data)
{
    int i;
    int j;

    i = 0;
    while (data->str[i])
    {
        j = 0;
        while (data->str[i][j])
        {
            if (data->str[i][j] == 'E')
            {
                data->exit_x = i;
                data->exit_y = j;
            }
            j++;
        }
        i++;
    }
}


void    win_init(t_data *data)
{
    data->j = 0;
    data->w = ft_strlen(data->str[0]) * 50;
    data->h = 0;
    while(data->str[data->j++])
        data->h++;
    data->h = data->h * 50;
    data->mlx = mlx_init();
    data->mlx_win = mlx_new_window(data->mlx, data->w, data->h, "a feeen adataat");
    get_player_pos(data);
    img_set(data);
    img_put(data);
}

void    map_check(t_data *data, char *map)
{
    char *str;
    char *line;
    int fd;
    int i;
    int j;
    str = NULL;
    fd = open(map, O_RDONLY);
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

int main(int ac, char **av)
{
    t_data data;
    map_check(&data, av[1]);
    win_init(&data);
    mlx_key_hook(data.mlx_win, key_gen, &data);
    mlx_loop(data.mlx);
}
