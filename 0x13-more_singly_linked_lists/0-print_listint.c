#include "lists.h"

/**
 *print_listint - print elements of  list.
 *@h: arguments
 *Return:  elements in the list.
 */

size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
