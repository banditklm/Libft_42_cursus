/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:22:46 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/11 21:01:57 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i])
	{
		i++;
	}
	ptr = (char *)s;
	if ((unsigned char)c == 0)
		return (ptr + i);
	i--;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return (ptr + i);
		}
		i--;
	}
	return (NULL);
}
