#include "holberton.h"
/**
 * times_table - print the number in list of 0 and 9
 * Return: void
 */

void times_table(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
if (j == 0)
_putchar((k % 10) + 48);
else if ((k / 10) == 0 && j != 0)
{
_putchar(' ');
_putchar((k % 10) + 48);
}
else
{
_putchar((k / 10) + 48);
_putchar((k % 10) + 48);
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
