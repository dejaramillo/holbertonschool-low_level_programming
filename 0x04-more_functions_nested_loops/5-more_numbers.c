#include "holberton.h"
/**
 * more_numbers - print numbers until fourteen
 * Return: void
 */

void more_numbers(void)
{
int n, x, z, c;
for (n = 48; n <= 57; n++)
{
for (x = 0; x <= 14; x++)
{
if (x >= 10)
{
z = x / 10;
c = x % 10;
_putchar(48 + z);
_putchar(48 + c);
}
else
{
z = x;
_putchar(48 + z);
}
}
_putchar('\n');
}
}
