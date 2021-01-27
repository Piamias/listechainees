#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int main(void)
{
	t_list *list;

	list = NULL;
	delCharAll(&list, "test");
	delAtFirst(&list);
	delAtEnd(&list);
	delChar(&list, "tata");
	printList(list);
	createElement(&list);
	printList(list);
	addAtFirst(&list, "toto");
	printList(list);
	delChar(&list, "tata");
	printList(list);
	addAtFirst(&list, "tata");
	printList(list);
	addAtEnd(&list, "toutou");
	printList(list);
	delChar(&list, "toto");
	printList(list);
	delAtEnd(&list);
	printList(list);
	addAtFirst(&list, "tutu");
	printList(list);
	addAtEnd(&list, "titi");
	printList(list);
	addAtFirst(&list, "tyty");
	printList(list);
	delAtFirst(&list);
	printList(list);
	delAtEnd(&list);
	printList(list);
	addAtFirst(&list, "tautau");
	printList(list);
	delChar(&list, "tautau");
	printList(list);
	addAtFirst(&list, "tautau");
	printList(list);
	addAtFirst(&list, "tautau");
	addAtFirst(&list, "tautau");
	addAtFirst(&list, "tautau");
	addAtFirst(&list, "tautau");
	addAtFirst(&list, "tautau");
	addAtEnd(&list, "tautau");
	delCharAll(&list, "tautau");
	printList(list);
	delCharAll(&list, "test");
	printList(list);
}		

