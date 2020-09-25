#include "holberton.h"
/**
 * print_square - print the square
 * @n: entry point
 * row and colum: two variables for int
 * Return: void
 */

void print_square(int n)
{
int row, column;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (row = 0; row < n; row++)
{
for (column = 0; column < n; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
