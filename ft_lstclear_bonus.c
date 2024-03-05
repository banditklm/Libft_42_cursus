/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:35:20 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/12 15:49:19 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst && *lst && del)
	{
		while (*lst)
		{
			del((*lst)-> content);
			tmp = (*lst)-> next;
			free(*lst);
			*lst = tmp;
		}
	}
}
