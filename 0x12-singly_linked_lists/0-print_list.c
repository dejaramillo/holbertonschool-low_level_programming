#include "lists.h"
/**
 * print_list - print elements of list_t
 *@h: struct of the list
 *Return: size_t
 */

size_t print_list(const list_t *h)
{
	int i, j;

	if (!h)
	{
		for (i = 0; h; i++)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				for (j = 0; h->str[j]; j++)
				{}
				printf("[%d] %s\n", i, h->str);
			}

		h = h->next;
	}
	return (i);
	}
	return (0);
}
