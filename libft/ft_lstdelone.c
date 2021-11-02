/*
Takes as a parameter an element and frees the memory of the element’s
content using the function ’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.
Parameter:
1. The element to free.
2.  The address of the function used to delete the content
*/

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst->content);
}
