/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:33:18 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:33:43 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	a;
	char	*str;

	str = s;
	a = 0;
	while (a < n)
	{
		str[a] = '\0';
		a++;
	}
}
