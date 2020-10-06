#include "holberton.h"
/**
 * *_strstr - print character in specific addres
 *@haystack: first entry point
 *@needle: second entry point
 *Return: char
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;
	for (i = 0; haystack[i]; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
		{
			j++;
		}
		if (j > 0)
			i -= j;
		if (j == '\0')
		{
			return (haystack + 1);
		}
	}
	return ('\0');
}
