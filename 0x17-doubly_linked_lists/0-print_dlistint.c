#include "lists.h"
/**
 *print_dlistint - function that print all elements of a list
 *@h: pointer with position of interger}
 *Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp = NULL;
	size_t i;

	if (h == NULL)
		return (0);

	tmp = (dlistint_t *)h;

	for (i = 0; tmp; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

	return (i);
}
