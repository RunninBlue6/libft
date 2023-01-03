/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:48:25 by jknyzhen          #+#    #+#             */
/*   Updated: 2023/01/03 18:02:09 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	src_len;

// 	i = 0;
// 	src_len = ft_strlen(src);
// 	if (dstsize > 0)
// 	{
// 		dstsize--;
// 		while (src[i] != '\0' && i < dstsize)
// 		{
// 			dst[i] = src[i];
// 			i++;
// 		}
// 		dst[i] = '\0';
// 	}
// 	return (src_len);
// }
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	ret;

// 	i = 0;
// 	if (dst == NULL)
// 	{
// 		ret = ft_strlcpy(dst, src, dstsize - i);
// 		return (ft_strlen (src));
// 	}
// 	while (*dst && i < dstsize)
// 	{
// 		++dst;
// 		++i;
// 	}
// 	ret = ft_strlcpy(dst, src, dstsize - i);
// 	return (ret + i);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (s1_len + s2_len +1));
	if (!str)
	{
		return (0);
	}
	ft_strlcpy(str, s1, s1_len +1);
	ft_strlcat(str + s1_len, s2, s2_len + 1);
	return (str);
}

// int	main()
// {
// 	char s1[] = "Yuliana";
// 	char s2[] = "Knyzhenko";
// 	printf("%s\n", ft_strjoin(s1, s2));
// }