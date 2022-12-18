/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:40:08 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/18 15:58:04 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;

    unsigned char   *p1;
    unsigned char   *p2;

    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    if (n == 0)
    {
        return  (0);
    }
    while (*p1 == *p2 && ++i < n)
    {
        p1++;
        p2++;
    }
    return  ((int)(*p1 - *p2));
}
