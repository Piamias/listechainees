#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void addAtFirst(t_list **list, char *str)
{
	t_list *tmp;

	tmp = NULL;	
	if (strcmp((*list)->str, "\0") == 0)
	{		
//		printf("\nOn est dans le if addAtFirst et la list est vide\n");	
		createElement(list);
		(*list)->str = str;
		(*list)->next = NULL;
		return;
	}
	if((*list)->next == NULL)
	{
//		printf("\nOn n'est pas rentre dans le if addAtFirst list vide / On est dans le if il y a un seul element dans la list\n");
		createElement(&tmp);
		tmp->str = (*list)->str;
		(*list)->str = str;
		(*list)->next = tmp;
		return;
	}
//	printf("\nOn n'est rentre dans aucun if donc il y a plus de 2 element dans list\n");
	createElement(&tmp);
	tmp->str = str;
	tmp->next = *list;
	*list = tmp;

}

