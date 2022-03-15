/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:47:29 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:47:33 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0 || len < ft_strlen(needle) - 1)
		return (NULL);
	a = 0;
	while (haystack[a] && a < len - ft_strlen(needle) + 1)
	{
		b = 0;
		while (haystack[a + b] == needle[b] && b <= len)
		{
			b++;
			if (!(needle[b] != '\0' && b != len))
				return ((char *)&haystack[a]);
		}
		a++;
	}
	return (NULL);
}
