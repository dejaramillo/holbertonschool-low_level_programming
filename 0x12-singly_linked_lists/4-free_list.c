#include "lists.h"
/**
 *4-free_list - free memory in list_t
 *@head: pointer  in list_t
 *return: void
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
