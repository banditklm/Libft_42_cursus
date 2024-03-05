/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:16:56 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/11 20:52:30 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 1)
	{
		return (0);
	}
	while (i < n 
		&& (*(unsigned char *)(s1 + i)) == (*(unsigned char *)(s2 + i)))
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((*(unsigned char *)(s1 + i)) - (*(unsigned char *)(s2 + i)));
}
