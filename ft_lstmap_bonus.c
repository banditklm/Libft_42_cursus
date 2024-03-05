/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:41:24 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/15 23:14:33 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*list;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		l = ft_lstnew(NULL);
		if (!l)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		l -> content = f(lst -> content);
		ft_lstadd_back(&list, l);
		lst = lst -> next;
	}
	return (list);
}
