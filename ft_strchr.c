/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:58:43 by abenmous          #+#    #+#             */
/*   Updated: 2022/10/19 18:45:36 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	y;
	int		i;

	i = 0;
	y = (char )c;
	while (s[i])
	{	
		if (s[i] == y)
			return ((char *)&s[i]);
		i++;
	}
	if (y == '\0')
		return ((char *)&s[i]);
	return (0);
}
