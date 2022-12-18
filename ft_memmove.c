/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 23:33:48 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/18 12:24:12 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memmove() function copies n bytes from memory area src to
       memory area dest.  The memory areas may overlap: copying takes
       place as though the bytes in src are first copied into a
       temporary array that does not overlap src or dest, and the bytes
       are then copied from the temporary array to dest.
       The memmove() function returns a pointer to dest.*/

void *ft_memmove(void *dest, const void *src, size_t len)
{
       unsigned char *temp1;
       unsigned char *temp2;

       temp1 = dest;
       temp2 = (unsigned char *)src;
       if (dest < src)
       {
              return(ft_memcpy(dest, src, len));
       }
       if (dest > src)
       {
              while (len--)
              {
                     temp1[len] = temp2[len];
              }
       }
       return (dest);
}
