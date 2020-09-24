#include <stdio.h>
#include "holberton.h"
/**
 * positive_or_negative - debug of a number positive or negative
 * @n: entry point
 * Return: if number is positive or negative
 */

void positive_or_negative(int n)
{
if (n < 0)
{
printf("%d is negative", n);
}
else if (n > 0)
{
printf("%d is positive", n);
}
else
{
printf("%d is zero", n);
}
}
