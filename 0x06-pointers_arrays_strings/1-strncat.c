#include "holberton.h"
/**
 * *_strncat - print string concat for n
 *@dest: first entry point (string)
 *@src: second entry point (string)
 *@n: third entry point (interger)
 *Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
int lenghtdest = 0, lenghtsrc;
	while (dest[lenghtdest] != '\0')
	{
		lenghtdest++;
	}
	while (lenghtsrc < n && src[lenghtsrc] != '\0')
	{
		dest[lenghtdest] = src[lenghtsrc];
		lenghtsrc++;
		lenghtdest++;
	}
	dest[lenghtdest] = '\0';
	return (dest);
}
