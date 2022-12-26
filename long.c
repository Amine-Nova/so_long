/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 19:16:25 by abenmous          #+#    #+#             */
/*   Updated: 2022/12/26 21:25:36 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main()
{
    char *maj;
    char **maji;
    char *line;
    int i;
    int fd = open("map.ber", O_RDONLY);
    line = get_next_line(fd);
    while (line) 
    {
        maj = ft_strjoin(maj, line);
        line = get_next_line(fd);
    }
    maji = ft_split(maj, '\n');
    printf("%s", maji[1]);
}