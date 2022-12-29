/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 19:16:25 by abenmous          #+#    #+#             */
/*   Updated: 2022/12/28 15:31:44 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
int my_check(char **s)
{
    struct v a;
    {
        a.l = -1;
        a.i = 0;
        a.j = 0;
        a.len = ft_strlen(s[a.j]);
    }
    while (s[a.i++])
        a.l++;
    a.i = 0;
    while(s[a.i])
    {
        a.j = 0;
        while((a.i == 0 || a.i == a.l) && a.j < a.len)
        {
            if(s[a.i][a.j] == '1')
                a.j++;
            else
                return(printf("%d", 5));
        }
        a.i++;
        while(a.i > 0 && a.i < a.l)
        {
            if(s[a.i][0] == '1' && s[a.i][a.len - 1] == '1')
                a.i++;
            else
                return(printf("%d", 6));
        }
    }
    return 0;
}
int my_check2(char **s)
{
    struct v b;
    {
        b.l = 0;
        b.i = 1;
        b.j = 1;
        b.len = ft_strlen(s[b.j]);
        b.u = 0;
    }
    while (s[b.i++])
        b.u++;
    b.i = 1;
    while(b.i < b.u)
    {
        while(b.i < b.u && b.j < b.len)
        {
            if(s[b.i][b.j] != 'E')
                b.j++;
            if(s[b.i][b.j] == 'E')
            {    
                b.l++;
                b.j++;
            }
        }
        b.j = 1;
        b.i++;
    }
    if (b.l != 1)
        return(printf("%d", 7));
    return(0);
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
    my_check2(maji);
}