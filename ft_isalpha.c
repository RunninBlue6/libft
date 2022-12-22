/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:44:42 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/22 13:58:42 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
    else
		return (0);
    }

// int main()
// {
//     char c;
//     c = 'Q';
//     printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));

//     c = 'q';
//     printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));

//     c='+';
//     printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));

//     return 0;
// }

