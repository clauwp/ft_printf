#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_findlen(unsigned long long n, int base)
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

char	*ft_uitoa_base(unsigned long long n, int base)
{
	char	*retstr;
	int		len;

	len = ft_findlen(n, base);
	if (n != 0)
		len--;
	retstr = (char *)malloc(sizeof(char) * (len + 2));
	if (retstr != NULL)
	{
		if (n == 0)
			retstr[0] = '0';
		retstr[len + 1] = 0;
		while (n != 0)
		{
			if ((n % base) >= 10)
				retstr[len] = (n % base) + 87;
			else
				retstr[len] = (n % base) + '0';
			len--;
			n = n / base;
		}
		return (retstr);
	}
	return (NULL);
}
