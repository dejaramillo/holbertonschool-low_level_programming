#include "holberton.h"
/**
 *puts2 - print string
 *@str: entry point
 *Return: void
 */

void puts2(char *str)
{
int i;
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
