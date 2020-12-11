#include "lists.h"
/**
 *sum_dlistint - Function that  returns the sum of all data of a list
 *@head:pointer with linked_list
 *Return: result of the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;
	int sum = 0;

	if (!head)
		return (0);

	tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
