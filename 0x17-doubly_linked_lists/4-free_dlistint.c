#include "lists.h"
/**
 *free_dlistint - free memory of linked_list
 *@head: pointer with linked_list
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
