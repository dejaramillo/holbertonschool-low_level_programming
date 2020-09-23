#include "holberton.h"

/**
 * print_last_digit - check the last number
 * @n: entry point
 * Return: 0 (success)
 */

int print_last_digit(int n)
{
int ln;
ln = n % 10 ;
if (n < 0)
{
ln = ln * -1;
}
_putchar(48 + ln);
return (ln);
}
