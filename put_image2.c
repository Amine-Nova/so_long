/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:58:32 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/23 18:16:40 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_set1(t_data *data)
{
	if (!data->img)
		exit_image(data, "Error\nImage not Found\n");
	if (!data->img1)
	{
		mlx_destroy_image(data->mlx, data->img);
		exit_image(data, "Error\nImage not Found\n");
	}
	if (!data->img2)
	{
		mlx_destroy_image(data->mlx, data->img);
		mlx_destroy_image(data->mlx, data->img1);
		exit_image(data, "Error\nImage not Found\n");
	}
	img_set2(data);
}

void	img_set2(t_data *data)
{
	if (!data->img3)
	{
		mlx_destroy_image(data->mlx, data->img);
		mlx_destroy_image(data->mlx, data->img1);
		mlx_destroy_image(data->mlx, data->img2);
		exit_image(data, "Error\nImage not Found\n");
	}
	if (!data->img4)
	{
		mlx_destroy_image(data->mlx, data->img);
		mlx_destroy_image(data->mlx, data->img1);
		mlx_destroy_image(data->mlx, data->img2);
		mlx_destroy_image(data->mlx, data->img3);
		exit_image(data, "Error\nImage not Found\n");
	}
}

void	error_image(t_data *data)
{
	if (!data->img)
	{
		mlx_destroy_image(data->mlx, data->img1);
		mlx_destroy_image(data->mlx, data->img2);
		mlx_destroy_image(data->mlx, data->img3);
		mlx_destroy_image(data->mlx, data->img4);
		exit_image(data, "Error\n1Image not Found\n");
	}
	if (!data->img1)
	{
		mlx_destroy_image(data->mlx, data->img);
		mlx_destroy_image(data->mlx, data->img2);
		mlx_destroy_image(data->mlx, data->img3);
		mlx_destroy_image(data->mlx, data->img4);
		exit_image(data, "Error\n2Image not Found\n");
	}
	if (!data->img2)
	{
		mlx_destroy_image(data->mlx, data->img1);
		mlx_destroy_image(data->mlx, data->img);
		mlx_destroy_image(data->mlx, data->img3);
		mlx_destroy_image(data->mlx, data->img4);
		exit_image(data, "Error\n3Image not Found\n");
	}
	error_image2(data);
}

void	error_image2(t_data *data)
{
	if (!data->img3)
	{
		mlx_destroy_image(data->mlx, data->img1);
		mlx_destroy_image(data->mlx, data->img2);
		mlx_destroy_image(data->mlx, data->img);
		mlx_destroy_image(data->mlx, data->img4);
		error_write1("Error\nImage not Found\n");
	}
	if (!data->img4)
	{
		mlx_destroy_image(data->mlx, data->img1);
		mlx_destroy_image(data->mlx, data->img2);
		mlx_destroy_image(data->mlx, data->img3);
		mlx_destroy_image(data->mlx, data->img);
		error_write1("Error\nImage not Found\n");
	}
}
