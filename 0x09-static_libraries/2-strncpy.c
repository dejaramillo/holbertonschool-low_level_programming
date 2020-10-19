#include "holberton.h"
/**
 * *_strncpy - print multi string
 *@dest: first entry point
 *@src: second entry point
 *@n: third entry point
 *Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
