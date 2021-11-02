/*
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index "start" and is of maximum size ’len’.
Return: substring
Parameter:
1. string from which to create the substring
2. The start index of the substring in the string 's'
3. The maximum length of the substring.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*retstr;
	char	*copyretstr;

	retstr = (char *)malloc(sizeof(char) * (len + 1));
	if (retstr != NULL)
	{
		copyretstr = retstr;
		while (start-- > 0)
			s++;
		while (len-- > 0 && *s)
			*copyretstr++ = *s++;
		*copyretstr = 0;
		return (retstr);
	}
	else
		return (NULL);
}
