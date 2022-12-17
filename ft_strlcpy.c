/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen < jknyzhen@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:13:27 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/17 21:13:27 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strlcpy(char *a, char *b) //a-destenation b-source
{
    int i;

    i = 0;
    while (b[i] != '\0')
    {
        a[i] = b[i];
        i++;
    }
    a[i] = '\0';
    return (a);
}