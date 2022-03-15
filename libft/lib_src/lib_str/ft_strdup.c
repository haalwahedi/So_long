/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:44:58 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:45:02 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	int		b;
	char	*s2;

	a = ft_strlen(s1);
	b = 0;
	s2 = malloc(sizeof(char) * a + 1);
	if (!s2)
		return (NULL);
	while (b < a)
	{
		s2[b] = s1[b];
		b++;
	}
	s2[b] = '\0';
	return (s2);
}
