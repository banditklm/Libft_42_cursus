/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:56:07 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/06 12:01:52 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = (char *)malloc((s1len + s2len) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	i = ft_strlcpy(str, s1, s1len + s2len + 1);
	j = ft_strlcat(str, s2, s1len + s2len + 1);
	str[j] = '\0';
	return (str);
}
