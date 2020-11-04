#include "lists.h"
/**
 *pop_listint - delete the head of the node
 *@head: pointer to pointer
 *Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int tmpnumber;

	if (*head)
	{
		tmpnumber = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (tmpnumber);
	}
	else
		return (0);
}
