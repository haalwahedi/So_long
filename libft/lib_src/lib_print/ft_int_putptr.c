/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:36:46 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:36:51 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

static int	ft_int_putptr_base(unsigned long long nbr, char *base)
{
	int					count;
	unsigned long long	hexptr;
	size_t				baselen;

	count = 0;
	hexptr = nbr;
	baselen = ft_strlen(base);
	if (hexptr >= baselen)
		count += ft_int_putptr_base(hexptr / baselen, base);
	count += ft_int_putchar(base[hexptr % baselen]);
	return (count);
}

int	ft_int_putptr(unsigned long long nbr)
{
	int	count;

	count = 0;
	count += ft_int_putstr("0x");
	count += ft_int_putptr_base(*(unsigned long long *)&nbr, LOWERHEX);
	return (count);
}
