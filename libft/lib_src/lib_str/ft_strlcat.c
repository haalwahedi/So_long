/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:45:37 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:45:42 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(dst);
	b = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= a)
		return (dstsize + ft_strlen(src));
	while (dstsize && (--dstsize - a) && src[b])
	{
		dst[a + b] = src[b];
		b++;
	}
	dst[a + b] = '\0';
	return (ft_strlen(src) + a);
}
