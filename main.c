/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:48:42 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/09 00:21:52 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int main()
{
    t_data data;
    map_check(&data);
    window_set(&data);
    mlx_loop(data.mlx);
}