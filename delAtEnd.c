#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void delAtEnd(t_list **list)
{
	t_list *tmp;
	t_list *del;

	tmp = *list;
	del = NULL;	
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
	if (!(*list)->next->next)
	{
		printf("\nOn vide la seconde valeur de la list\n");	
		free((*list)->next);
		(*list)->next = NULL;
		return;
	}
	while (tmp->next->next != NULL)
	{
//		printf("\nOn est dans la boucle\n");	
		tmp = tmp->next;
	}
//	printf("\nOn sort de la boucle\n");
	del = tmp->next;
	free(del);
	tmp->next = NULL;
}
