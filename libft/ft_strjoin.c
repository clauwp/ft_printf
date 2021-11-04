/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:56:21 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:56:26 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a new string,
which is the result of the concatenation of "s1" and ’s2’
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*retstr;
	char	*copyretstr;

	retstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (retstr != NULL)
	{
		copyretstr = retstr;
		while (*s1)
			*retstr++ = *s1++;
		while (*s2)
			*retstr++ = *s2++;
		*retstr = 0;
		return (copyretstr);
	}
	else
		return (NULL);
}
