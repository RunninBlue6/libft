/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:46:11 by jknyzhen          #+#    #+#             */
/*   Updated: 2023/01/02 15:12:41 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strrchr() function returns a pointer to the LAST occurrence 
//of the character c in the string s.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	x;
	char			*ptr;

	i = ft_strlen(s);
	x = (unsigned char) c;
	while (i >= 0)
	{
		if (s[i] == x)
		{
			ptr = (char *) &s[i];
			return (ptr);
		}
		i--;
	}
	return (NULL);
}
