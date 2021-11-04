/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:55:48 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:55:50 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns a pointer to the first occurrence of the character c in the string s
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	copy_c;

	copy_c = (char) c;
	if (copy_c == 0)
		return ((char *) &str[ft_strlen(str)]);
	while (*str)
	{
		if (copy_c == *str)
			return ((char *) str);
		str++;
	}
	return (NULL);
}
