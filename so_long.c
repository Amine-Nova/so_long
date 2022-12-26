/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:47:30 by abenmous          #+#    #+#             */
/*   Updated: 2022/12/25 16:05:19 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main()
{
    void *mlx;
    void *mlx_win;
    int x;
    int y;

    x = 200;
    y = 800;
    mlx = mlx_init();
    mlx_win = mlx_new_window(mlx, 1000, 1000, "a feeen asat");
    while(x <= 800)
    {
        mlx_pixel_put(mlx, mlx_win, x, y, 0x0F00FF);
        x++;
    }
    x = 201;
    y = 799;
    while(x <= 500)
    {
        mlx_pixel_put(mlx, mlx_win, x, y, 0x00FF00);
        x++;
        y--;
        y--;
    }
    x = 799;
    y = 799;
    while(x >= 500)
    {
        mlx_pixel_put(mlx, mlx_win, x, y, 0xee82ee);
        x--;
        y--;
        y--;
    }
    mlx_loop(mlx);
}
