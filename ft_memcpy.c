/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 23:27:02 by jknyzhen          #+#    #+#             */
/*   Updated: 2023/01/11 20:43:16 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcpy() function copies n bytes from memory area src to
       memory area dest.  The memory areas must not overlap.  Use
       memmove(3) if the memory areas do overlap.
       the memcpy() function returns a pointer to dest.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;
	size_t		i;

	if (!dest && !src)
		return (0);
	if (n > 0)
	{
		i = 0;
		ptr_dest = (char *) dest;
		ptr_src = (const char *) src;
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(){
// 	char str[] = "memcpy test!";
// 	char str1[30];
// 	char str2[30];

// 	ft_memcpy(str1, str, strlen(str)+1);
// 	ft_memcpy(str2, "copy", 5);
// 	printf("str: %s\nstr1 : %s\nstr2: %s\n",str,str1,str2);
// 	return 0;
// }