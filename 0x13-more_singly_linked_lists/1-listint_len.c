#include "lists.h"
/**
 *listint_len - print number of element in the list
 *@h: arguments
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}

	return (c);
}
