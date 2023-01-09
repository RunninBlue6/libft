/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:43:42 by jknyzhen          #+#    #+#             */
/*   Updated: 2023/01/09 15:21:38 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	output[12];
	long	tmp;
	int		i;
	int		sign;

	output[11] = '\0';
	i = 10;
	sign = 1;
	if (n < 0)
		sign = -1;
	tmp = (long) n * sign;
	while (tmp > 9)
	{
		output[i] = (char)(tmp % 10) + '0';
		tmp = tmp / 10;
		i--;
	}
	output[i] = (char)(tmp % 10) + '0';
	if (sign == -1)
	{
		i--;
		output[i] = '-';
	}
	ft_putstr_fd(&output[i], fd);
}
