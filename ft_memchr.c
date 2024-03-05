/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:23:12 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/04 16:19:33 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;
	char				*w;
	int					uc;

	ptr = (unsigned char *)s;
	i = 0;
	w = NULL;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (*(unsigned char *)(ptr + i) == uc)
		{
			return ((void *)ptr + i);
		}
		i++;
	}
	return ((void *)w);
}
