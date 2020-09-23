#include "holberton.h"

/**
 * print_last_digit - check the last number
 * @n: entry point
 * Return: last_number wiht digit n
 */

int print_last_digit(int n)
{
int last_number;
if (n > 0)
{
_putchar(48 + n % 10);
}
else
{
last_number = (n * -1) % 10;
_putchar(48 + last_number);
}
return (last_number);
}
