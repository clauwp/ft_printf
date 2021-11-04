/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:53:44 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:53:45 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*copydst;

	copydst = dst;
	while (n > 0)
	{
		*copydst = *((unsigned char *) src);
		src++;
		copydst++;
		n--;
	}
	return (copydst);
}
