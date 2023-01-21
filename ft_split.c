/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:20:06 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/19 15:32:44 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
		i++;
		if (s[i])
		j++;
		while (s[i] && s[i] != c)
		i++;
	}
	return (j);
}

static char	*ft_c(char const *s, char c)
{
	int		i;
	char	*st;

	i = 0;
	while (s[i] && s[i] != c)
			i++;
	st = (char *)ft_calloc(1, (i + 1));
	if (!st)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		st[i] = s[i];
		i++;
	}
	return (st);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		word;
	int		j;

	j = 0;
	if (!s)
		return (0);
	word = word_count(s, c);
	p = (char **)ft_calloc(sizeof(char *), (word + 1));
	if (!p)
		return (0);
	while (*s)
	{
		while (*s == c)
		s++;
		if (*s != c && *s)
			p[j] = ft_c(s, c);
		while (*s != c && *s)
			s++;
		j++;
	}
	return (p);
}
