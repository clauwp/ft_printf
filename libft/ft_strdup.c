#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*retstr;
	char	*copyretstr;

	retstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (retstr != NULL)
	{
		copyretstr = retstr;
		while (*s1)
		{
			*retstr = *s1;
			retstr++;
			s1++;
		}
		*retstr = 0;
		return (copyretstr);
	}
	else
		return (NULL);
}
