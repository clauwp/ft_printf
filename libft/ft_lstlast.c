/*
Returns the last element of the list.
Return: Last element of list
Parameter: first element of list
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
