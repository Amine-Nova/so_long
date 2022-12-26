/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 19:16:25 by abenmous          #+#    #+#             */
/*   Updated: 2022/12/26 22:48:17 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
int my_check(char **s)
{
    int i;
    int j;
    int len;
    int l;

    l = -1;
    i = 0;
    j = 0;
    while (s[i++])
        l++;
    i = 0;
    len = ft_strlen(s[j]);
    while(s[i])
    {
        if(i == 0 || i == l)
        {
            while(s[i][j])
            {
                if(s[i][j] == '1')
                    j++;
                else
                    return(printf("%d", 1));
            }
        }
        i++;
        // if(i > 0 && i < l)
        // {
        //     if(s[i][0] != '1' || s[i][len] != '1')
        //         return(printf("%d", 2));
        // }
    }
    return(printf("%d", 3));
}
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
    my_check(maji);
}