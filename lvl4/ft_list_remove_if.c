#include "ft_list.h"
#include <stdlib.h>

/*
 * ** note: does not free the stuff inside the linked lists
 * */

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*free_me;

	if (*begin_list)
	{
		if (cmp((*begin_list)->data, data_ref))
		{
			free_me = *begin_list;
			*begin_list = (*begin_list)->next;
			free(free_me);
			ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			ft_list_remove_if(&(*begin_list)->next, data_ref, cmp);
	}
}
