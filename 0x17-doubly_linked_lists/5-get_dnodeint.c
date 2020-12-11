#include "lists.h"
/**
 *get_dnodeint_at_index - Function that retrurn insert node
 *@head: pointer with linked_list
 *@index: index for add node
 *Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int  i;

	if (!head)
		return (NULL);

	tmp = head;

	for (i = 0; tmp->next; i++)
		tmp = tmp->next;

	if (index > i)
		return (NULL);

	tmp = head;

	while (index > 0)
	{
		tmp = tmp->next;
		index--;
	}

	return (tmp);
}
