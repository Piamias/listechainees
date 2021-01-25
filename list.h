#ifndef __list_h__
#define __list_h__

typedef struct s_list t_list;
struct s_list
{
	char *str;
	t_list *next;
};

void createElement(t_list **list);

void addAtFirst(t_list **list, char *str);

void addAtEnd(t_list **list, char *str);

void delAtFirst(t_list **list);

void delAtEnd(t_list **list);

int delChar(t_list **list, char *str);

void delCharAll(t_list **list, char *str);

void printList(t_list *list);

#endif
