/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:48:26 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:48:30 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*newstr;
	size_t	s_len;

	if (!s)
		return (NULL);
	a = 0;
	s_len = ft_strlen(s);
	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s);
	newstr = malloc(sizeof(char) * len + 1);
	if (!newstr)
		return (NULL);
	while (s[start + a] && a < len && start < s_len)
	{
		newstr[a] = s[start + a];
		a++;
	}
	newstr[a] = '\0';
	return (newstr);
}
