/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:08:24 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/23 15:07:43 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strchr() function returns a pointer to the 
//first occurrence of the character c in the string s.

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	s_len;

	i = 0;
	s_len = ft_strlen(s) + 1;
	while (i < s_len)
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
