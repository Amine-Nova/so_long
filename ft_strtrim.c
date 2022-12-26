/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:46:14 by abenmous          #+#    #+#             */
/*   Updated: 2022/10/22 11:03:32 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	check(char o, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (o == set[i])
			return (0);
		i++;
	}
	return (1);
}

static int	find_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		if (check(s1[i], set) == 0)
			i--;
		else
			return (i);
	}
	return (0);
}

static int	find_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (check(s1[i], set) == 0)
		i++;
		else
			return (i);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	st;
	int	end;
	int	len;

	if (s1 == 0)
		return (0);
	st = find_start(s1, set);
	end = find_end(s1, set);
	len = end - st + 1;
	if (end == 0)
		return (ft_strdup(""));
	return (ft_substr(s1, st, len));
}
