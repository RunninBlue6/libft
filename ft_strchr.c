/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:08:24 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/18 13:53:55 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strchr() function returns a pointer to the first occurrence of the character c in the string s.

char *ft_strchr(const char *s, int c)
{
    while   (*s != '\0')
    {
        if ((unsigned char )*s == (unsigned char)c)
        {
            return ((char *)s);
        }
        s++;
    }
    if (c == 0)
    {
        return ((char *)s);
    }
    return(NULL);
}
