#include "holberton.h"
/**
 *_strlen_recursion - print lenght of string
 *@s: entry point
 *Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
