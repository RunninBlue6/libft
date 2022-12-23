/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:13:27 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/23 14:11:53 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"
/*a-destenation b-source*/
char	*ft_strlcpy(char *a, char *b)
{
	int	i;

	i = 0;
	while (b[i] != '\0')
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
