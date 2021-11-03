/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:33:50 by clau              #+#    #+#             */
/*   Updated: 2021/09/07 13:34:10 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 erases the data in the n bytes of the memory starting at the
 location pointed to by s, by writing zeros
 (bytes containing '\0') to that area
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*copys;

	copys = (unsigned char *) s;
	while (n-- > 0)
	{
		*copys++ = 0;
	}
}
