/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:40:08 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/23 15:01:48 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memcmp() function compares the first n bytes 
//(each interpreted as unsigned char) of the memory areas s1 and s2.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	int				result;
	size_t			i;

	ptr_s1 = (unsigned char *) s1;
	ptr_s2 = (unsigned char *) s2;
	i = 0;
	result = 2;
	while (result == 2 && i < n)
	{
		if (ptr_s1[i] < ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		else if (ptr_s1[i] > ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	if (result == 2)
		result = 0;
	return (result);
}
