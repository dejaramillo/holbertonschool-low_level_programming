#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_strings - print strings
 *@separator: pointer of stgring
 *@n: number of arguments
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	char *str;

	if (n < 1)
	{
		printf("\n");
		return;
	}

	va_start(num, n);

	for (i = 0 ; i < n; i++)
	{
		str = va_arg(num, char*);

		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(num);
}
