/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:09:49 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/03 04:58:22 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	dstlen = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dstlen < dstsize && dst[dstlen])
		dstlen++;
	srclen = ft_strlen(src);
	if (!dst || !src)
		return (0);
	i = dstlen;
	while (j + dstlen + 1 < dstsize && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (dstlen + srclen);
}
