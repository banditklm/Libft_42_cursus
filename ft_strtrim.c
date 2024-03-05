/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:00:53 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/11 21:02:40 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*str;
	int		size;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	if (i > len - 1)
		return (ft_strdup(""));
	while (len > 0 && ft_strchr(set, s1[len]))
		len--;
	size = len - i + 1;
	str = (char *)malloc(size * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str = ft_memcpy(str, (s1 + i), size);
	str[size] = '\0';
	return (str);
}
