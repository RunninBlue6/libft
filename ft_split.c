/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:56:42 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/29 18:26:55 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*substr;

// 	i = 0;
// 	j = 0;
// 	if (!s)
// 		return (NULL);
// 	if (strlen(s) < len)
// 		len = strlen(s);
// 	substr = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!substr)
// 		return (NULL);
// 	while (start < strlen(s) && i < len)
// 	{
// 		// if (i >= start && j < len)		
// 			substr[j] = s[i + start];
// 			j++;
// 		// }
// 		i++;	
// 	}
// 	substr[j] = '\0';
// 	return (substr);
// }

int	counting_words(const char *str, char delim)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] == delim)
		{
			while (str[i] && str[i] == delim)
				i++;
		}
		else
		{
			while (str[i] && str[i] != delim)
				i++;
			counter++;
		}
	}
	return (counter);
}

char	**wordss(char **ptr_str, const char *s, char delim, int word_count)
{
	int	i = 0;
	int	word = 0;
	int	length = 0;

	// i = 0;
	// word = 0;
	// lenght = 0;
	while (s[i] && word < word_count)
	{
		while (s[i] && s[i] == delim)
			i++;
		while (s[i] && s[i] != delim)
		{
			i++;
			length++;
		}
	ptr_str[word] = ft_substr(s, i - length, length);
	length = 0;
	word++;
	}
	ptr_str[word] = 0;
	return (ptr_str);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;

	i = counting_words(s, c);
	ptr = malloc(sizeof (char *) * (i + 1));
	if (!ptr)
		return (NULL);
	wordss(ptr, s, c, i);
	return (ptr);
}

// int main () {
// 	char *str = "Yuliana";
// 	char c = 'a';
// 	char **ptr = ft_split(str, c);
// 	int i = 0;

// 	while (ptr[i])
// 	{
// 		printf ("%s\n", ptr[i]);
// 		i++;	
// 	}	
// }
