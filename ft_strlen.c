/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen < jknyzhen@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:51:38 by jknyzhen          #+#    #+#             */
/*   Updated: 2022/12/17 20:51:38 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char  *str)
{
    int i;

    i = 0;
    while   (str[i])
        i++;
    return  (i);
}