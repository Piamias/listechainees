#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void delCharAll(t_list **list, char *str)
{
	int test;

	test =0;
	while (test != 1)
	{
		test = delChar(list, str);
	}		
}		
