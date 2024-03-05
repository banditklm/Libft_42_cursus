/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:33:21 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/05 01:07:15 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		while (len-- > 0)
			*(char *)(dst + len) = *(char *)(src + len);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
