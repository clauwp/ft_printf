#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*copy;

	copy = s;
	while (n > 0)
	{
		*copy = (unsigned char) c;
		copy++;
		n--;
	}
	return (s);
}
