/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:35:05 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:35:10 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		a;

	if (!dst && !src)
		return (NULL);
	a = 0;
	if (dst <= src)
	{
		while (a < n)
		{
			((char *)dst)[a] = ((char *)src)[a];
			a++;
		}
	}
	else if (dst > src)
	{
		while (n > 0)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	return (dst);
}
