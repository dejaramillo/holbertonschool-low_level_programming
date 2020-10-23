#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *print_numbers - print numbers of string
 *@separator: pointer of string with numbers
 *@n: number of arguments
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));

		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar(10);

	va_end(num);
}
