/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:23:56 by jknyzhen          #+#    #+#             */
/*   Updated: 2023/01/02 15:55:37 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>
// #include <limits.h>

// char	*ft_strchr(const char *s, int c)
// {
// 	unsigned int	i;
// 	unsigned int	s_len;

// 	i = 0;
// 	s_len = ft_strlen(s) + 1;
// 	while (i < s_len)
// 	{
// 		if (s[i] == (char) c)
// 			return ((char *) &s[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

// char	*ft_strrchr(const char *s, int c)
// {
// 	int				i;
// 	unsigned char	x;
// 	char			*ptr;

// 	i = ft_strlen(s);
// 	x = (unsigned char) c;
// 	while (i >= 0)
// 	{
// 		if (s[i] == x)
// 		{
// 			ptr = (char *) &s[i];
// 			return (ptr);
// 		}
// 		i--;
// 	}
// 	return (NULL);
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

// char	*ft_strdup(const char *s1)
// {
// 	char			*p;
// 	unsigned int	s_lenght;

// 	s_lenght = ft_strlen(s1) + 1;
// 	p = (char *)malloc(s_lenght);
// 	if (p)
// 	{
// 		ft_strlcpy(p, s1, s_lenght);
// 		return (p);
// 	}
// 	return (NULL);
// }

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

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*substr;

// 	i = 0;
// 	j = 0;
// 	if (!s)
// 		return (NULL);
// 	if (ft_strlen(s) < len)
// 		len = ft_strlen(s);
// 	substr = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!substr)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		if (i >= start && j < len)
// 		{
// 			substr[j] = s[i];
// 			j++;
// 		}
// 		i++;
// 	}
// 	substr[j] = '\0';
// 	return (substr);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (ft_strrchr(set, s1[len]) && len > 0)
		len--;
	str = ft_substr(s1, 0, len + 1);
	return (str);
}

// int	main()
// {
// 	printf("%s\n", ft_strtrim("Yuliana", "a"));
// 	printf("%s\n", ft_strtrim("1234567890", "6"));
// 	printf("%s\n", ft_strtrim("12345678966", "6"));
// }