#include "lists.h"
/**
 *delete_nodeint_at_index - Function that deletes the node of the list
 *@head: pointer whit direction of head
 *@index: position in the linked list for delete
 *Return: 1 success and -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = NULL, *tmp1 = NULL;

	if (head)
	{
		tmp = *head;

		if (index == 0)
		{
			if (tmp)
			{
				*head = (*head)->next;
				free(tmp);
				return (1);
			}
			else
				return (-1);
		}

		for (i = 1; i < index; i++)
		{
			if (tmp)
				tmp = tmp->next;
			else
				return (-1);
		}

		tmp1 = tmp->next;
		tmp->next = tmp1->next;
		free(tmp1);
		return (1);
	}
	else
		return (-1);
}
