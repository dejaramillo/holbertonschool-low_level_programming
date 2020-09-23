#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - print numbers up to 98
 * @n: entry point of numbers
 * Return: void
 */

void print_to_98(int n)
{
int num;
while (num != 98)
{
if (n > 98)
{
printf("%d, ", n);
n--;
}
else if (n < 98)
{
printf("%d, ", n);
n++;
}
else
{
printf("%d", n);
num = n;
}
}
}
