#include "lists.h"
/**
 *add_nodeint - function add new node
 *@head: pointer from parameter
 *@n: number of node.
 *Return: the pointer of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
		new->next = *head;

		*head = new;
		return (*head);
	}
	else
		return (NULL);
}
