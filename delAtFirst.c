#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void delAtFirst(t_list **list)
{
	t_list *tmp;

	tmp = NULL;	
	if (!(*list))
	{
		printf("\nLa liste est deja vide\n");
		return;
	}
	if (!(*list)->next)
	{
		printf("\nOn vide la seul valeur de la list\n");	
		free((*list));
		(*list)->next = NULL;
		return;
	}
	tmp = *list;
	*list = (*list)->next;
	free(tmp);
}		
