#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*copystr;

	copystr = (unsigned char *) str;
	while (n > 0 && *copystr)
	{
		if ((unsigned char) c == *copystr)
			return (copystr);
		n--;
		copystr++;
	}
	return (NULL);
}
