#include "lists.h"
/**
 *reverse_listint - print list in reverse
 *@head: point with direction of head
 *Return: print in reverse
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *last = NULL;

	if (*head)
	{
		while (*head)
		{
			next = (*head)->next;
			(*head)->next = last;
			last = *head;
			*head = next;
		}
		*head = last;
		return (*head);
	}
	return (NULL);
}
