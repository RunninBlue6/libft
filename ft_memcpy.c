/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen < jknyzhen@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 23:27:02 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/17 23:27:02 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcpy() function copies n bytes from memory area src to
       memory area dest.  The memory areas must not overlap.  Use
       memmove(3) if the memory areas do overlap.
       the memcpy() function returns a pointer to dest.*/
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
    while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
