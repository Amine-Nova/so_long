/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 19:16:25 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/23 15:28:14 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	my_check(char **s, int len)
{
	struct s_v	a;

	a.l = wide_c(s);
	a.i = 0;
	while (s[a.i])
	{
		a.j = 0;
		while ((a.i == 0 || a.i == a.l) && a.j < len)
		{
			if (s[a.i][a.j] == '1')
				a.j++;
			else
			{
				free_map(s);
				error_write1("Error\nFirst line or Last line (1)\n");
			}
		}
		a.i++;
	}
	my_check0(s, len);
	my_check2(s, len);
	my_check3(s, len);
	my_check4(s, len);
}

void	my_check0(char **s, int len)
{
	struct s_v	a;

	a.l = wide_c(s);
	a.i = 1;
	while (s[a.i] && a.i > 0 && a.i < a.l)
	{
		if (s[a.i][0] == '1' && s[a.i][len - 1] == '1')
			a.i++;
		else
		{
			free_map(s);
			error_write1("Error\nFirst or Last(1)\n");
		}
	}
}

void	my_check2(char **s, int len)
{
	struct s_v	a;

	a.l = 0;
	a.i = 1;
	a.j = 1;
	a.u = wide_c(s);
	while (a.i < a.u)
	{
		while (a.i < a.u && a.j < len)
		{
			if (s[a.i][a.j] != 'E')
				a.j++;
			if (s[a.i][a.j++] == 'E')
				a.l++;
		}
		a.j = 1;
		a.i++;
	}
	if (a.l != 1)
	{
		free_map(s);
		error_write1("Error\nProbleme(E)\n");
	}
}

void	my_check3(char **s, int len)
{
	struct s_v	a;

		a.l = 0;
		a.i = 1;
		a.j = 1;
		a.u = wide_c(s);
	while (a.i < a.u)
	{
		while (a.i < a.u && a.j < len)
		{
			if (s[a.i][a.j] != 'P')
				a.j++;
			if (s[a.i][a.j++] == 'P')
				a.l++;
		}
		a.j = 1;
		a.i++;
	}
	if (a.l != 1)
	{
		free_map(s);
		error_write1("Error\nProbleme(P)\n");
	}
}

void	my_check4(char **s, int len)
{
	struct s_v	a;

		a.l = 0;
		a.i = 1;
		a.j = 1;
		a.u = wide_c(s);
	while (a.i < a.u)
	{
		while (a.i < a.u && a.j < len)
		{
			if (s[a.i][a.j] != 'C')
				a.j++;
			if (s[a.i][a.j++] == 'C')
				a.l++;
		}
		a.j = 1;
		a.i++;
	}
	if (a.l < 1)
	{
		free_map(s);
		error_write1("Error\nProbleme(C)\n");
	}
}
