/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:39:04 by clau              #+#    #+#             */
/*   Updated: 2021/09/07 16:45:02 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2
Return: 0 if n is zero or if s1 = s2, > 0 if s1>s2, <0 if s1<s2
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*copy1;
	unsigned char	*copy2;

	copy1 = (unsigned char *) s1;
	copy2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*copy1 != *copy2 || *copy1 == 0 || *copy2 == 0)
			return (*copy1- *copy2);
		n--;
	}
	return (0);
}
