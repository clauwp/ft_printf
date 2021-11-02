#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (dstsize == 0 || dstlen > dstsize)
		return (dstsize + ft_strlen(src));
	else
	{
		while (*dst)
			dst++;
		while (dstsize - 1 > dstlen)
		{
			*dst++ = *src++;
			dstsize--;
		}
		*dst = 0;
		return (dstlen + ft_strlen(src));
	}
}
