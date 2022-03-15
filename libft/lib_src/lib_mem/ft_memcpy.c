/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:34:49 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:34:58 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t			a;
	unsigned char	*dest;
	unsigned char	*srce;

	if (!src && !dst)
		return (NULL);
	dest = dst;
	srce = src;
	a = 0;
	while (a < n)
	{
		dest[a] = srce[a];
		a++;
	}
	return (dst);
}
