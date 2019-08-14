#include "nc_list.h"

void	lstIter(t_list **head, void (*f)(t_list *elem))
{
	t_list *tmp;

	tmp = *head;
	while (tmp)
	{
		f(tmp);
		tmp = tmp->next;
	}
}
