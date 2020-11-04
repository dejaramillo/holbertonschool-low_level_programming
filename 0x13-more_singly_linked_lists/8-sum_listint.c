#include "lists.h"
/**
 *sum_listint - function that return the sum all the data
 *@head: pointer wiht direction of head
 *Return: int
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = NULL;
	int sum = 0;

	if (head)
	{
		tmp = head;

		while (tmp)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
		return (sum);
	}
	else
		return (0);
}
