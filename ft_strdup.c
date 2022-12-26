/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:58:11 by abenmous          #+#    #+#             */
/*   Updated: 2022/10/06 17:44:13 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strdup(const char *src1)
{
	int		u;
	char	*src2;
	size_t	srcl;

	u = 0;
	srcl = ft_strlen(src1);
	src2 = malloc((srcl + 1) * sizeof(char));
	if (!src2)
		return (NULL);
	while (src1[u] != '\0')
	{
		src2[u] = src1[u];
		u++;
	}
	src2[u] = '\0';
	return (src2);
}
