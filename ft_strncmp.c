/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:56:47 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/19 16:59:40 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strcmp() function compares the two strings s1 and s2.  The
locale is not taken into account (for a locale-aware comparison,
see strcoll(3)).  The comparison is done using unsigned
characters. strcmp() returns an integer indicating the result of the
comparison, as follows: • 0, if the s1 and s2 are equal; • a negative value if s1 is less than s2; • a positive value if s1 is greater than s2.
The strncmp() function is similar, except it compares only the
first (at most) n bytes of s1 and s2.*/

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    if(n == 0)
    {
        return (0);
    }
    while((unsigned char)*s1 == (unsigned char)*s2 && *s1 !='\0' && n  - 1 > 0)
    {
        s1++;
        s2++;
        n--;
    }
    return ((unsigned char)*s1 - (unsigned char)*s2);
}
