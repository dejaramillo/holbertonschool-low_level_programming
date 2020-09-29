#include "holberton.h"
/**
 *puts_half - print half numbers
 *@str: entry point
 *Return: void
 */

void puts_half(char *str)
{
int i, n;
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
	}
	else
	{
		n = i / 2;
	}
	for (n = i - n; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar(10);

}
