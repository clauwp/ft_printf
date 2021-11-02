/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:13:28 by clau              #+#    #+#             */
/*   Updated: 2021/09/07 16:17:31 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (*needle == 0 || ft_strlen(haystack) < ft_strlen(needle))
		return ((char *) haystack);
	while (haystack[i] && len > 0)
	{
		j = 0;
		while (haystack[j + i] == needle[j])
		{
			if (needle[j + 1] == 0)
				return ((char *)&haystack[i]);
			j++;
		}
		len--;
		i++;
	}
	return (NULL);
}
