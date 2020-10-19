#include "holberton.h"
/**
 * *_strstr - print character in specific addres
 *@haystack: first entry point
 *@needle: second entry point
 *Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	j = needle;

	if (*j == 0)
		return (haystack);

	for (; *haystack; haystack++)
	{
		if (*haystack != *j)
			continue;

		i = haystack;

		while (1)
		{
			if (*j == 0)
				return (haystack);

			if (*i++ != *j++)
				break;
		}
		j = needle;
	}

	return ('\0');
}
