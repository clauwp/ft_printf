#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	int	count;

	count = 0;
	while (src[count])
		count++;
	while (dst_size > 1)
	{
		*dst = *src;
		dst++;
		src++;
		dst_size--;
	}
	*dst = 0;
	return (count);
}
