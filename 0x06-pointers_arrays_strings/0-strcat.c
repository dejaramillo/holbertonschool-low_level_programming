#include "holberton.h"
/**
 * *_strcat - print string concat
 *@dest: first entry point
 *@src: second entry point
 *Return: char
 */

char *_strcat(char *dest, char *src)
{
int lg = 0, lg1 = 0;
	while (dest[lg] != '\0')
	{
		lg++;
	}
	while (src[lg1] != '\0')
	{
		dest[lg] = src[lg1];
		lg1++;
		lg++;
	}
	dest[lg] = '\0';
	return (dest);
}
