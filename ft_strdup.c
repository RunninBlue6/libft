/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:41:45 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/28 14:46:28 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <string.h>

//size_t	ft_strlen(const char *s)
//{
//	size_t	i;
//
//	i = 0;
//	while (s[i])
//	{
//		i++;
//	}
//	return (i);
//}

//size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
//{
//	size_t	i;
//	size_t	src_len;
//
//	i = 0;
//	src_len = ft_strlen(src);
//	if (dstsize > 0)
//	{
//		dstsize--;
//		while (src[i] != '\0' && i < dstsize)
//		{
//			dst[i] = src[i];
//			i++;
//		}
//		dst[i] = '\0';
//	}
//	return (src_len);
//}

char	*ft_strdup(const char *s1)
{
	char			*p;
	unsigned int	s_lenght;

	s_lenght = ft_strlen(s1) + 1;
	p = (char *)malloc(s_lenght);
	if (p)
	{
		ft_strlcpy(p, s1, s_lenght);
		return (p);
	}
	return (NULL);
}
