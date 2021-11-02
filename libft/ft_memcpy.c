#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*copydst;

	copydst = dst;
	while (n > 0)
	{
		*copydst = *((unsigned char *) src);
		src++;
		copydst++;
		n--;
	}
	return (copydst);
}
