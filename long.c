/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 19:16:25 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/09 00:20:21 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void my_check(char **s, int len)
{
    struct v a;
        a.l = -1;
        a.i = 0;
        a.j = 0;
        a.len = ft_strlen(s[a.j]);
    while (s[a.i++])
        a.l++;
    a.i = 0;
    while(s[a.i])
    {
        a.j = 0;
        while((a.i == 0 || a.i == a.l) && a.j < len)
        {
            if(s[a.i][a.j] == '1')
                a.j++;
            else
                exit(1);
        }
        a.i++;
        while(a.i > 0 && a.i < a.l)
        {
            if(s[a.i][0] == '1' && s[a.i][len - 1] == '1')
                a.i++;
            else
                exit(1);
        }
    }
}

void my_check2(char **s, int len)
{
    struct v b;
        b.l = 0;
        b.i = 1;
        b.j = 1;
        b.u = 0;
    while (s[b.i++])
        b.u++;
    b.i = 1;
    while(b.i < b.u)
    {
        while(b.i < b.u && b.j < len)
        {
            if(s[b.i][b.j] != 'E')
                b.j++;
            if(s[b.i][b.j++] == 'E')
                b.l++;
        }
        b.j = 1;
        b.i++;
    }
    if (b.l != 1)
        exit(1);
}

void my_check3(char **s, int len)
{
    struct v c;
        c.l = 0;
        c.i = 1;
        c.j = 1;
        c.u = 0;
    while (s[c.i++])
        c.u++;
    c.i = 1;
    while(c.i < c.u)
    {
        while(c.i < c.u && c.j < len)
        {
            if(s[c.i][c.j] != 'P')
                c.j++;
            if(s[c.i][c.j++] == 'P')   
                c.l++;
        }
        c.j = 1;
        c.i++;
    }
    if (c.l != 1)
        exit(1);
}

void my_check4(char **s, int len)
{
    struct v d;
        d.l = 0;
        d.i = 1;
        d.j = 1;
        d.u = 0;
    while (s[d.i++])
        d.u++;
    d.i = 1;
    while(d.i < d.u)
    {
        while(d.i < d.u && d.j < len)
        {
            if(s[d.i][d.j] != 'C')
                d.j++;
            if(s[d.i][d.j++] == 'C') 
                d.l++;
        }
        d.j = 1;
        d.i++;
    }
    if (d.l < 1)
        exit(1);
}