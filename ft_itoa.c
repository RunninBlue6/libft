/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:54:41 by jknyzhen          #+#    #+#             */
/*   Updated: 2023/01/11 16:13:00 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>
// #include <limits.h>

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = get_len(n);
	nb = n;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}

// int main()
// {
// 	printf("%s\n", ft_itoa(123456789));
// 	printf("%s\n", ft_itoa(-123456789));
// 	printf("%s\n", ft_itoa(0));
// }