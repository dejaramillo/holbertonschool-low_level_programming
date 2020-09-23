#include "holberton.h"

/**
 * print_last_digit - check the last number
 * @n: entry point
 * Return: 0 (success)
 */

int print_last_digit(int n)
{
int ln;
if (n >= 0)
{
ln = n % 10;
}
else
{
ln = (n * -1) % 10;
}
_putchar('0' + ln);
return (ln);
}
