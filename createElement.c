#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void createElement(t_list **list)
{
	(*list) = malloc(sizeof(t_list));
	(*list)->str = "\0";
	(*list)->next = NULL;
}		
