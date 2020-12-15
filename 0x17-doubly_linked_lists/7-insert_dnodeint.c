#include "lists.h"
/**
 *insert_dnodeint_at_index - Function that adds a node at a given position
 *@h: pointer with linked_list
 *@idx: index of elements where save the node
 *@n: number for add in the linked_list
 *Return: addres of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = NULL;
	unsigned int i;

	if (!h)
		return (NULL);
	if (!*h)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	tmp = *h;
	for (i = 0; tmp->next; i++)
		tmp = tmp->next;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if (idx == i + 1)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	else if (idx > i)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	for (; i != idx - 1; i--)
		tmp = tmp->prev;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	new->prev = tmp;

	return (new);
}
