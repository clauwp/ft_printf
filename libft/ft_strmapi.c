/*
Applies the function ’f’ to each character of the
string ’s’ to create a new string (with malloc(3))
resulting from successive applications of ’f’.
*/
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*retstr;
	unsigned int	i;

	i = 0;
	retstr = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (retstr != NULL)
	{
		while (s[i])
		{
			retstr[i] = f(i, s[i]);
			i++;
		}
		retstr[i] = 0;
		return (retstr);
	}
	else
		return (NULL);
}
