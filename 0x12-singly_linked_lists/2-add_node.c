#include "lists.h"
/**
 *@head: direccion of pointer head
 *@str: string argument
 *Return: the direction of element
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	for (i = 0; str[i]; i++)
		;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = (*head);

	(*head) = new;

	return (*head);
}
