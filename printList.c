#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void printList(t_list *list)
{
	int i;

	i = 0;
	if(!list)
	{
		printf("\nPas de liste\n");
		printf("------------------\n");
		return;
	}		
//	printf("\nOn rentre dans le printList\n");
	if (!list->next)
	{
//		printf("\nOn rentre dans le if printList\n");	
		printf("\nlist[0] = %p / list[0]->str = %s / list[0]->next = %p\n",list, list->str,list->next);
		printf("------------------\n");
		return;
	}
	while (list)
	{
//		printf("\nOn rentre dans la boucle printList\n");	
		printf("\nlist[%d] = %p / list[%d]->str = %s / list[%d]->next = %p\n", i, list, i, list->str, i,list->next);
		list = list->next;
		i++;
	}	
	printf("------------------\n");
}		

