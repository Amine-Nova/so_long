/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:16:23 by abenmous          #+#    #+#             */
/*   Updated: 2022/10/22 11:01:21 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srl;
	size_t	dsl;
	size_t	j;

	i = 0;
	if (!dst && !dstsize)
		return (0);
	srl = ft_strlen(src);
	dsl = ft_strlen(dst);
	j = dsl;
	if (dstsize <= dsl)
		return (dstsize + srl);
	while (src[i] && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dsl + srl);
}
