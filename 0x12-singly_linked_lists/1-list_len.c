#include "lists.h"
/**
 *list_len - return elements in the list_t
 *@h:struct of the linked list
 *Return: number of elements  in the list
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			i++;
		}
		return (i);
	}
	else
	{
		return (0);
	}
}
