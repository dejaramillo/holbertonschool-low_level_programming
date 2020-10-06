#include "holberton.h"
/**
 * *_strstr - print character in specific addres
 *@haystack: first entry point
 *@needle: second entry point
 *Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, z = 0;
	char *p = '\0';
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			z = i;
			for (j = 0; needle[j]; j++)
			{
				if (haystack[z] != needle[j])
					break;
				z++;
			}	
		}
		
		if (needle[j] == '\0')
		{
			p = &haystack[i];
			return (p);
		}
	}
	return (p);		
}
