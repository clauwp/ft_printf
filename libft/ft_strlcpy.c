/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:57:06 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:57:08 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	int	count;

	count = 0;
	while (src[count])
		count++;
	while (dst_size > 1)
	{
		*dst = *src;
		dst++;
		src++;
		dst_size--;
	}
	*dst = 0;
	return (count);
}
