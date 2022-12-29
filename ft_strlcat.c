/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:07:26 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/29 19:35:15 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	a;

// 	i = 0;
// 	a = ft_strlen(src);
// 	if (!dstsize)
// 		return (a);
// 	while (src[i] && i < dstsize - 1)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (a);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ret;

	i = 0;
	if (dst == NULL)
	{
		ret = ft_strlcpy(dst, src, dstsize - i);
		return (ft_strlen (src));
	}
	while (*dst && i < dstsize)
	{
		++dst;
		++i;
	}
	ret = ft_strlcpy(dst, src, dstsize - i);
	return (ret + i);
}

// int main()
// {
// 	char p[40] = "B";
// 	char p1[40] = "B";
// 	char *g = "AAAAAAAAA";
// 	printf("%lu\n",strlcat(NULL,g,0));
// 	//printf("%s\n",p);
// 	printf("%lu\n",ft_strlcat(NULL,g,0));
// 	//printf("%s\n",p1);
// }