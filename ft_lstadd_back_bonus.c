/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:45:13 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/11 20:41:44 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst && new)
	{
		if (*lst)
		{
			tmp = *lst;
			while (tmp -> next)
				tmp = tmp -> next;
			(tmp)-> next = new;
		}
		else 
			*lst = new;
	}
}
