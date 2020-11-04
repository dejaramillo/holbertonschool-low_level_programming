#include "lists.h"
/**
 *insert_nodeint_at_index -function that insert a new node at a given position
 *@head:pointer whit direction of head
 *@idx: index
 *@n: int argument
 *Return: number whit given position
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new = NULL, *tmp = NULL;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = NULL;

		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (*head);
		}
		tmp = *head;

		for (i = 1; i < idx; i++)
		{
			if (!tmp)
				return (NULL);
			tmp = tmp->next;
		}

		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
	else
		return (NULL);
}
