/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:55:34 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:55:36 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static char	*ft_strnew(char *start, char *end);

char	**ft_split(const char *s, char c)
{
	char	**retarray;
	char	*start;
	char	*end;
	int		len;

	retarray = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (retarray != NULL)
	{
		len = 0;
		while (*s)
		{
			start = (char *) s;
			while (*s != c && *s)
				s++;
			end = (char *) s;
			if (start != end)
				retarray[len++] = ft_strnew(start, end);
			s++;
		}
		return (retarray);
	}
	else
		return (NULL);
}

static char	*ft_strnew(char *start, char *end)
{
	char	*retstr;
	int		len;

	len = 0;
	while (&start[len] != end)
		len++;
	retstr = (char *)malloc(sizeof(char) * (len + 1));
	len = 0;
	if (retstr != NULL)
	{
		while (start != end)
		{
			retstr[len++] = *start++;
		}
		retstr[len] = 0;
		return (retstr);
	}
	else
		return (NULL);
}
