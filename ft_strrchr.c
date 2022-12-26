/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:26:08 by abenmous          #+#    #+#             */
/*   Updated: 2022/10/19 18:46:02 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	y;

	y = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == y)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
