#include "holberton.h"
/**
 * _abs - print te value absolute of int number
 * @n: point entry
 * Return: n value int
 */

int _abs(int n)
{
int abs_n;
if (n <= 0)
{
abs_n = -(n * 1);
}
else
{
abs_n = n;
}
return (abs_n);
}
