#include "holberton.h"
/**
 * *_memcpy - print copy in space at memory
 *@dest:entry point
 *@src:second entry point
 *@n: third entry point
 *Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
