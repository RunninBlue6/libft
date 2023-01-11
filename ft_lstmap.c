/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:11:29 by jknyzhen          #+#    #+#             */
/*   Updated: 2023/01/11 20:00:55 by jknyzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst1;
	t_list	*new;

	lst1 = (void *)0;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&lst1, del);
			return (lst1);
		}
		ft_lstadd_back(&lst1, new);
		lst = lst->next;
	}
	return (lst1);
}

// void	*f(void *first_char)
// {
// 	((char *)first_char)[0] = 'W';
// 	return (first_char);
// }

// void	(*del)(void *cont)
// {
// 	printf("%s\n", cont);
// }

// int	main ()
// {
// 	t_list	*lst;
// 	t_list	*lst0;
// 	t_list	*lst1;
// 	char	*a1;
// 	int		lst_size;

// 	lst_size = 2;
// 	a1 = malloc(sizeof(char) + 6);
// 	ft_strlcpy (a1, "slovo1", 6);
// 	lst = ft_lstnew(a1);
// 	lst0 = lst;
// 	while (lst_size <= 4)
// 	{
// 		a1 = malloc(sizeof(char) + 6);
// 		ft_strlcpy(a1, "slovo1", 6);
// 		a1[4] = (lst_size % 10) + '0';
// 		lst->next = ft_lstnew(a1);
// 		lst = lst->next;
// 		lst_size++;
// 	}
// 	lst1 = ft_lstmap(lst0, f, del);
// 	while (lst0)
// 	{
// 		printf("%s\n", lst0->content);
// 		lst0 = lst0->next;
// 	}
// }