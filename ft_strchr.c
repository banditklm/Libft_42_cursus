/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:24:53 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/04 15:31:34 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	int		len;

	len = 0;
	len = ft_strlen(s);
	ptr = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return (ptr + i);
		}
		i++;
	}
	if ((unsigned char)c == 0)
		return (ptr + i);
	return (NULL);
}
