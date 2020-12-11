#include "lists.h"
/**
 *add_dnodeint - Functions that adds a new node at the beginning o a list
 *@head:pointer with linked_list
 *@n:date for save in the linked_list
 *Return: node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);

	new = create_node(n);
	if (!*head)
	{
		*head = new;
		return (new);
	}

	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (new);
}

/**
 *create_node - create node of linked_list
 *@n: date for save in the linked list
 *Return: new node
 */

dlistint_t  *create_node(int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	return (new);
}
