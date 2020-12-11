#include "lists.h"

/**
 *dlistint_len - Function that retunr the numbers of elements of a lists
 *@h: poointer with linked_list
 *Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp = NULL;
	size_t i;

	if (!h)
		return (0);

	tmp = (dlistint_t *)h;

	for (i = 0; tmp; i++)
		tmp = tmp->next;

	return (i);
}
