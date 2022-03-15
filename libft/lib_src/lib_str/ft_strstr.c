/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:47:53 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:47:58 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	a;
	size_t	b;

	if (!needle || !needle[0])
		return ((char *)haystack);
	a = 0;
	while (haystack[a])
	{
		b = 0;
		if (haystack[a] == needle[b])
		{
			while (haystack[a + b] == needle[b])
			{
				b++;
				if (!needle[b])
					return ((char *)&haystack[a]);
			}
		}
		a++;
	}
	return (NULL);
}
