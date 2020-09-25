#include "holberton.h"
/**
 * more_numbers - print numbers until fourteen
 * Return: void
 */

void more_numbers(void)
{
int n, x;
for (n = '0'; n <= '9'; n++)
{
for (x = 0; x <= 14; x++)
{
if (x >= 10)
{
_putchar('0' + (x / 10));
_putchar('0' + (x % 10));
}
else
{
_putchar('0' + (x % 10));
}
}
_putchar('\n');
}
}
