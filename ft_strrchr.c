/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:46:11 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/19 16:59:42 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strrchr() function returns a pointer to the LAST occurrence of the character c in the string s.

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *p;

    p = NULL;
    while (*s != '\0')
    {
        if (*s == c)
            {
                p = (char *)s;
            }
        s++;
    }
    if (c == '\0')
    {
        return  ((char *)s);
    }
    return  (p);
}
