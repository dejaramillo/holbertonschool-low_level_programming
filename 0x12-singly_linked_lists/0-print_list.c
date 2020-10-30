#include "lists.h"
/**
 * print_list - print elements of list_t
 *@h: struct of the list
 *Return: size_t
 */

size_t print_list(const list_t *h)
{
	int i, j = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			for (i = 0; h->str[i]; i++)
				;
			printf("[%d] %s\n", i, h->str);
		}

		h = h->next;

		j++;
	}

	return (j);
}
