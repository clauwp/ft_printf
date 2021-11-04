/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:49:36 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:49:38 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Adds the element ’new’ at the end of the list.
Parameter: 
1. The address of a pointer to the first link of a list
2.  The address of a pointer to the element to be added to the list.
*/	

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		(*lst) = new;
	else
	{
		while ((*lst)->next)
		{
			lst = &((*lst)->next);
		}
		(*lst)->next = new;
	}
}
