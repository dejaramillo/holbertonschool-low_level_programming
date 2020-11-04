#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth node of list
 *@head: pointer with position of head
 *@index: argument
 *Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	tmp = head;
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);
	}
	return (tmp);
}
