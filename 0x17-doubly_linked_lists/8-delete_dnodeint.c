#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that removes a node at a specific index
 * @head: Head of the linked list
 * @index: Index where the new node should be added
 * Return: 1 if it succeeded and -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL, *tmp2 = NULL;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	tmp = *head;
	for (i = 0; tmp->next; i++)
		tmp = tmp->next;

	if (index == 0)
	{
		delete_ini(head);
		return (1);
	}
	else if (index == i)
	{
		delete_end(head);
		return (1);
	}
	else if (index > i)
		return (-1);

	for (; i != index - 1; i--)
		tmp = tmp->prev;

	tmp->next->next->prev = tmp;
	tmp2 = tmp->next;
	tmp->next = tmp->next->next;
	free(tmp2);
	tmp2 = NULL;

	return (1);
}

/**
 * delete_ini - Function that removes a node at the beginning
 * @head: Head of the linked list
 */
void delete_ini(dlistint_t **head)
{
	dlistint_t *tmp = NULL;

	if (!(*head)->next)
	{
		free(*head);
		*head = NULL;
		return;
	}

	tmp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(tmp);
	tmp = NULL;
}

/**
 * delete_end - Function that removes a node at the end
 * @head: Head of the linked list
 */
void delete_end(dlistint_t **head)
{
	dlistint_t *tmp = NULL, *tmp2 = NULL;

	tmp = *head;
	for (; tmp->next->next;)
		tmp = tmp->next;

	tmp2 = tmp->next;
	tmp->next = NULL;
	free(tmp2);
	tmp2 = NULL;
}
