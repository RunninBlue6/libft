/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:49:51 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/22 17:32:39 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.
#include "libft.h"

 void ft_bzero(void *s, size_t n)
{
 size_t i;

    i = 0;
    char    *p;
    
    p = (char *)s;
    while (i < n)
    {
        *(p + i) = 0;
        i++;
    }
}
