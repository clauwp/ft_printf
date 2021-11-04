/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:49:47 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:49:51 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Adds the element ’new’ at the beginning of the
list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	lst = &new;
}
