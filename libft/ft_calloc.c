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
