/*
returns a pointer to the last occurrence of the character c in the string s.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == c)
			return ((char *) &str[len]);
		len--;
	}
	return (NULL);
}
