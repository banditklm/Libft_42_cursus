/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:07:11 by kelmounj          #+#    #+#             */
/*   Updated: 2023/11/16 00:24:57 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_lenght(long nb)
{
	int		count;

	count = 0;
	if (nb < 0)
	{
		count++;
		nb = nb * (-1);
	}
	while (nb > 9)
	{
		nb = nb / 10;
		count++;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = get_lenght(nb);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (nb < 0)
		nb = -nb;
	while (len >= 0)
	{
		if (n < 0 && len == 0)
		{
			str[len] = '-';
			break ;
		}
		str[len] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (str);
}
