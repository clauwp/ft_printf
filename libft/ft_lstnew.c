/*
Allocates (with malloc(3)) and returns a new
element. The variable ’content’ is initialized
with the value of the parameter ’content’. The
variable ’next’ is initialized to NULL.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*retlist;

	retlist = (t_list *)malloc(sizeof(t_list));
	if (retlist != NULL)
	{
		retlist->content = content;
		retlist->next = NULL;
		return (retlist);
	}
	else
		return (NULL);
}
