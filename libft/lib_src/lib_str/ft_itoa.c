/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:44:14 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:44:21 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

static size_t	count_char(long nb)
{
	size_t	a;

	a = 0;
	if (nb <= 0)
	{
		nb = nb * -1;
		a++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		a++;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	size_t	a;

	nb = n;
	a = count_char(nb);
	str = malloc(sizeof(char) * a + 1);
	if (!str)
		return (NULL);
	str[a] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[a - 1] = '0' + (nb % 10);
		nb = nb / 10;
		a--;
	}
	return (str);
}
