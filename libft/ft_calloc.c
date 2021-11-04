/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:47:52 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:47:55 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*retval;
	char	*temp;
	size_t	bytes;

	bytes = size * count;
	retval = malloc(bytes);
	if (retval != NULL)
	{
		temp = retval;
		while (bytes > 0)
		{
			*temp = 0;
			bytes--;
			temp++;
		}
		return (retval);
	}
	else
		return (NULL);
}
