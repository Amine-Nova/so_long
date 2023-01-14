/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 19:16:25 by abenmous          #+#    #+#             */
/*   Updated: 2023/01/12 17:35:39 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void write_error()
{
        write(2, "Error\n", 6);
}

void my_check(char **s, int len)
{
    struct v a;
        a.l = -1;
        a.i = 0;
        a.j = 0;
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
            {
                write_error();
                exit(1);
            }
        }
        a.i++;
        while(a.i > 0 && a.i < a.l)
        {
            if(s[a.i][0] == '1' && s[a.i][len - 1] == '1')
                a.i++;
            else
            {
                write_error();
                exit(1);
            }
        }
    }
}

void my_check2(char **s, int len)
{
    struct v a;
        a.l = 0;
        a.i = 1;
        a.j = 1;
        a.u = 0;
    while (s[a.i++])
        a.u++;
    a.i = 1;
    while(a.i < a.u)
    {
        while(a.i < a.u && a.j < len)
        {
            if(s[a.i][a.j] != 'E')
                a.j++;
            if(s[a.i][a.j++] == 'E')
                a.l++;
        }
        a.j = 1;
        a.i++;
    }
    if (a.l != 1)
    {
        write_error();
        exit(1);
    }
}

void my_check3(char **s, int len)
{
    struct v a;
        a.l = 0;
        a.i = 1;
        a.j = 1;
        a.u = 0;
    while (s[a.i++])
        a.u++;
    a.i = 1;
    while(a.i < a.u)
    {
        while(a.i < a.u && a.j < len)
        {
            if(s[a.i][a.j] != 'P')
                a.j++;
            if(s[a.i][a.j++] == 'P')   
                a.l++;
        }
        a.j = 1;
        a.i++;
    }
    if (a.l != 1)
    {
        write_error();
        exit(1);
    }
}

void my_check4(char **s, int len)
{
    struct v a;
        a.l = 0;
        a.i = 1;
        a.j = 1;
        a.u = 0;
    while (s[a.i++])
        a.u++;
    a.i = 1;
    while(a.i < a.u)
    {
        while(a.i < a.u && a.j < len)
        {
            if(s[a.i][a.j] != 'C')
                a.j++;
            if(s[a.i][a.j++] == 'C') 
                a.l++;
        }
        a.j = 1;
        a.i++;
    }
    if (a.l < 1)
    {
        write_error();
        exit(1);
    }
}