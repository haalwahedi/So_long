/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:07:21 by halwahed          #+#    #+#             */
/*   Updated: 2022/03/08 13:07:25 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *newlst)
{
	t_list	*last;

	last = NULL;
	if (alst)
	{
		if (*alst)
		{
			last = ft_lstlast(*alst);
			last->next = newlst;
		}
		else
			*alst = newlst;
	}
}
