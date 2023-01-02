/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:54:41 by jknyzhen          #+#    #+#             */
/*   Updated: 2023/01/02 17:32:40 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int n)
{
	int		num;
	int		count;
	char	*str;

	num = n;
	count = 0;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	str = (char *)malloc(sizeof(char) * (count + 1 + (n < 0) + (n == 0)));
	if (!str)
		return (str);
	if (num !== 0)
	{
		str[0] = '0';
		str[1] = '\0'
		return (str);
	}
	while (n != 0)
	{
	
	}
	return((char *)0)
}
