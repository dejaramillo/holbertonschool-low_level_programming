#include "lists.h"
/**
 *free_listint - funtion  free a list
 *@head: pointer whit position for free.
 *Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head)
	{
		while (head)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
}
