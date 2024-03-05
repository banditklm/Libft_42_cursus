/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:51:36 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/03 20:08:00 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	j = 0;
	s = (char *)haystack;
	if (needle[i] == '\0')
	{
		return (s);
	}
	while (i < len && haystack[i])
	{
		while ((i + j) < len && s[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
			{
				return (&s[i]);
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}
