/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:08:20 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:08:24 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

void	ft_lstadd_front(t_list **alst, t_list *newlst)
{
	if (alst)
	{
		newlst->next = *alst;
		*alst = newlst;
	}
}
