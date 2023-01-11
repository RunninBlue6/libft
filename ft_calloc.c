/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:52:54 by jknyzhen          #+#    #+#             */
/*   Updated: 2023/01/11 16:12:47 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	arr = malloc(size * count);
	if (!arr)
	{
		return (NULL);
	}
	ft_memset(arr, 0, size * count);
	return (arr);
}
