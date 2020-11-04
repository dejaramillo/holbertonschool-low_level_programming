#include "lists.h"
/**
 *free_listint2 - function free list whit pointer to pointer
 *@head: pointer to pointer
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head && head)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
	}
	else
		head = NULL;
}
