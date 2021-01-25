#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void addAtEnd(t_list **list, char *str)
{
	t_list *tmp;
	t_list *new;

	tmp = *list;
	new = NULL;
	if (strcmp((*list)->str, "\0") == 0)
	{		
//		printf("\nOn est dans le if addAtEnd et la list est vide\n");	
		createElement(list);
		(*list)->str = str;
		(*list)->next = NULL;
		return;
	}
	if((*list)->next == NULL)
	{
//		printf("\nOn n'est pas rentre dans le if addAtEnd list vide / On est dans le if il y a un seul element dans la list\n");
		createElement(&new);
		new->str = str;
		(*list)->next = new;
		return;
	}
//	printf("\nOn n'est rentre dans aucun if donc il y a plus de 2 element dans list\n");
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	createElement(&new);
	new->str = str;
	tmp->next = new;
}		

