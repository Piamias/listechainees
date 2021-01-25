#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int delChar(t_list **list, char *str)
{
	t_list *tmp;
	t_list *del;

	tmp = *list;	
	del = NULL;
	if (!(*list))
	{
		printf("\nLa liste est deja vide\n");
		return 1;
	}
	if (!(*list)->next)
	{
		if(strcmp((*list)->str, str) == 0)
		{
			free(*list);
			(*list)->next = NULL;
			return 0;
		}
		else
		{
//			printf("\nAucune valeur trouve 1\n");
			return 1;
		}
	}
//	printf("\nOn est devant la boucle\n");
//	printf("\nstr = %s\n", str);
//	printf("\nstr = %s\n", tmp->str);
	if (strcmp(tmp->str, str) == 0)
	{
		(*list) = tmp->next;
		free(tmp);
		return 0;
	}		
	while (strcmp(tmp->next->str, str) != 0)
	{
//		printf("\nOn rentre dans la boucle\n");	
		if (tmp->next->next == NULL)
		{
//			printf("\nAucune valeur trouve 2\n");
			return 1;
		}
		tmp = tmp->next;		
	}
//	printf("\nOn sort de la boucle\n");
	del = tmp->next;
	tmp->next = tmp->next->next;
	free(del);		
	return 0;
}		
