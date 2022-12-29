/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:23:29 by abenmous          #+#    #+#             */
/*   Updated: 2022/12/29 20:03:23 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void my_check4(char **s)
{
    struct v d;
        d.l = 0;
        d.i = 1;
        d.j = 1;
        d.len = ft_strlen(s[d.j]);
        d.u = 0;
    while (s[d.i++])
        d.u++;
    d.i = 1;
    while(d.i < d.u)
    {
        while(d.i < d.u && d.j < d.len)
        {
            if(s[d.i][d.j] != 'C')
                d.j++;
            if(s[d.i][d.j] == 'C')
            {    
                d.l++;
                d.j++;
            }
        }
        d.j = 1;
        d.i++;
    }
    if (d.l < 1)
        exit(1);
}