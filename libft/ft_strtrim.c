/*
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified
in "set" removed from the beginning and the end of the string.
Parameter:
1. string to trim
2. reference set of characters to trim
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, const char *set)
{
	char	*retstr;
	char	*start;
	char	*end;
	int		i;

	while (ft_strchr(set, *s1) != 0)
		s1++;
	start = (char *) s1;
	while (*s1)
		s1++;
	while ((ft_strchr(set, *s1) != 0 && s1 != start) || *s1 == 0)
		s1--;
	end = (char *) s1;
	i = 0;
	while (&start[i] != end)
		i++;
	retstr = (char *)malloc(sizeof(char) * (i + 2));
	i = 0;
	while (start <= end)
		retstr[i++] = *start++;
	retstr[i] = 0;
	return (retstr);
}
