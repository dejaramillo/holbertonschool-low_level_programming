#include "holberton.h"
/**
 * print_line - print line
 * @n: entry point
 * Return: void
 */

void print_line(int n)
{
int init;
for (init = 0; init <= n; init++)
{
if (n < 0)
{
_putchar('\n');
break;
}
else
{_putchar('_');
}
}
_putchar('\n');
}
