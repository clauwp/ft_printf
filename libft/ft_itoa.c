/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:47:28 by clau              #+#    #+#             */
/*   Updated: 2021/11/04 08:47:31 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a string representing
the integer received as an argument. Negative numbers must be handled.
*/

#include "libft.h"
#include <stdlib.h>

static int	ft_findlen(int n, int base)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / base;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*retstr;
	int		len;

	len = ft_findlen(n, 10);
	if (n > 0)
		len--;
	retstr = (char *)malloc(sizeof(char) * (len + 2));
	if (retstr != NULL)
	{
		if (n < 0)
			retstr[0] = '-';
		else if (n == 0)
			retstr[0] = '0';
		retstr[len + 1] = 0;
		while (n != 0)
		{
			if (n < 0)
				retstr[len--] = -(n % 10) + '0';
			else
				retstr[len--] = (n % 10) + '0';
			n = n / 10;
		}
		return (retstr);
	}
	return (NULL);
}
