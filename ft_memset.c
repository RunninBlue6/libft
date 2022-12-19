/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:12:51 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/19 16:59:56 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char    *p;

    p = (unsigned char *)b;
    while (len > 0)
    {
        p[len-1] = c;
        len--;
    }
    return (b);
}
