/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:00:44 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/21 21:52:59 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (ac != 2)
		return (0);
	map_check(&data, av[1]);
	put_map(data.ptr);
	win_init(&data);
	mlx_key_hook(data.mlx_win, key_gen, &data);
	mlx_loop(data.mlx);

}
