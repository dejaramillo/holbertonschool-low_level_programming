#include "holberton.h"
/**
 * print_line - print line
 * @n: entry point
 * Return: void
 */

void print_line(int n)
{
int x;
if (n > 0)
{
for (x = 0; x < n; x++)
{
_putchar('_');
}
}
_putchar('\n');
}
