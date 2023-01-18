/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:00:44 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/17 21:19:35 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_data	data;

	map_check(&data, av[1]);
	put_map(av[1]);
	win_init(&data);
	mlx_key_hook(data.mlx_win, key_gen, &data);
	mlx_loop(data.mlx);
}
