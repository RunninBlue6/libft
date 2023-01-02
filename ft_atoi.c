/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:30:18 by jknyzhen          #+#    #+#             */
/*   Updated: 2023/01/02 16:04:04 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	convert;
	int	result;

	i = 0;
	convert = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		convert = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	return (result * convert);
}

// int	main()
// {
// 	char *p = "         ---50";
// // 	printf("heey\n");
// 	printf("chislo %d\n", ft_atoi(p));
// 	printf("chislo %d\n", atoi(p));

// }