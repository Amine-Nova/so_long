/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:00:44 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/22 16:07:57 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (ac != 2)
		error_write1("Error\nMap not Found\n");
	if (ft_cmp(".ber", av[1], 3) == 0)
		error_write1("Error\nMap Invalid\n");
	map_check(&data, av[1]);
	put_map(data.ptr);
	win_init(&data);
	mlx_key_hook(data.mlx_win, key_gen, &data);
	mlx_hook(data.mlx_win, 17, 0, error_write0, &data);
	mlx_loop(data.mlx);
}
