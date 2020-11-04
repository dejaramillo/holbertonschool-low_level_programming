#include "lists.h"
/**
 *add_nodeint_end - add new node in the end list
 *@head: pointer from argument
 *@n: argument
 *Return: pointer of the end postion
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *last = NULL;

	new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = NULL;
		last = *head;

		if (*head)
		{
			while (last->next)
				last = last->next;
			last->next = new;
		}
		else
		{
			*head = new;
		}
		return (*head);
	}
	else
		return (NULL);
}
