/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:19:14 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/19 16:59:50 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memchr() function scans the initial n bytes of the memory
       area pointed to by s for the first instance of c.  Both c and the
       bytes of the memory area pointed to by s are interpreted as
       unsigned char.*/

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;

    unsigned char   *p;
    p = (unsigned char *)s;

    i = 0;
    while   (i < n)
    {
        if  (*p == (unsigned char )c)
        {
            return  ((void *)p);
        }
        p++;
        i++;
    }
    return  (NULL);
}
