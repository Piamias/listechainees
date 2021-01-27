#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void delCharAll(t_list **list, char *str)
{
	t_list *tmp;
	t_list *del;

	tmp = *list;
	del = NULL;
	if (!(*list))
	{
		printf("\nLa liste est deja vide\n");
		return ;
	}
	if ((*list)->next == NULL)
	{		
		if (strcmp((*list)->str, str) == 0)
		{
			del = *list;
			*list = (*list)->next;
			free(del);
			return;	
		}
		else
		{
			return;
		}		
	}	
	while (tmp->next->next != NULL)
	{
		if (strcmp(tmp->next->str, str) == 0)
		{
			del = tmp->next;
			tmp->next = tmp->next->next;
			free(del);
		}
		else		
		{
			tmp = tmp->next;
		}
	}

	if (strcmp((*list)->str, str) == 0)
		{
			del = *list;
			*list = (*list)->next;
			free(del);
		}
	if (strcmp(tmp->next->str, str) == 0)
	{
		del = tmp->next;
		tmp->next = NULL;
		free(del);
	}	
}	
