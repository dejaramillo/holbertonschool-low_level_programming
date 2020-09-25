#include "holberton.h"
/**
 * more_numbers - print numbers until fourteen
 * Return: void
 */

void more_numbers(void)
{
int n, x;
for (n = 48; n <= 57; n++)
{
for (x = 0; x <= 14; x++)
{
if (x >= 10)
{
_putchar(48 + (x / 10));
_putchar(48 + (x % 10));
}
else
{
_putchar(48 + x);
}
}
_putchar('\n');
}
}
