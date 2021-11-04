/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:53:10 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:53:12 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Counts the number of elements in a list.
Return: number of elements
Parameter:  The beginning of the list
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
