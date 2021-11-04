/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:57:16 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:57:17 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Applies the function ’f’ to each character of the
string ’s’ to create a new string (with malloc(3))
resulting from successive applications of ’f’.
*/
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*retstr;
	unsigned int	i;

	i = 0;
	retstr = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (retstr != NULL)
	{
		while (s[i])
		{
			retstr[i] = f(i, s[i]);
			i++;
		}
		retstr[i] = 0;
		return (retstr);
	}
	else
		return (NULL);
}
