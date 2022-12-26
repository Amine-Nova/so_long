/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:49:36 by abenmous          #+#    #+#             */
/*   Updated: 2022/10/22 11:04:29 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	if (s == 0)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (ft_strlen(s) <= start + len)
		s1 = malloc((ft_strlen(s) - start + 1));
	else
		s1 = malloc(len + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		s1[i] = s[start];
		i++;
		start++;
	}
	s1[i] = '\0';
	return (s1);
}
