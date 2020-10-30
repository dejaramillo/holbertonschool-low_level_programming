#include "lists.h"
/**
 *add_node_end -  add node the end of the list
 *@head: pointer for node
 *@str: string 
 *Return: pointer with address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new = NULL;
	list_t *last = NULL;

	for (i = 0; str[i]; i++)
		;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	last = (*head);

	if (*head)
	{
		while (last->next)
			last = last->next;

		last->next = new;
	}
	else
	{
		(*head) = new;
	}

	return (*head);
}
