#include "holberton.h"
/**
 *_strlen - print lenght of the words
 *@s: entry point
 *Return: int
 */

int _strlen(char *s)
{
	int lenght;
lenght = 0;
	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
