/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:52:24 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:52:26 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns the last element of the list.
Return: Last element of list
Parameter: first element of list
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
