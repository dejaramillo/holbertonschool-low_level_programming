#include "holberton.h"
/**
 * print_most_numbers - print number and not print 2 and four
 * Return: void
 */

void print_most_numbers(void)
{
int n;
for (n = 48; n <= 57; n++)
{
if (n == 50 || n == 52)
{
n++;
}
_putchar(n);
}
_putchar('\n');
}
