#include "holberton.h"
/**
 *puts2 - print string
 *@str: entry point
 *Return: void
 */

void puts2(char *str)
{
int i, j;
	for (i = 0; str[i] != '\0'; i++)
	{	
	}
	for (j = 0; j <= i - 2; j += 2)
	{
		_putchar(str[j]);
	}
	
	_putchar(10);
}
