#include "holberton.h"
#include <stdio.h>
/**
 *print_array - print array
 *@a: entry point
 *@n:entry second point
 *Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;
	while(i < n)
	{
		printf("%d", a[i]);
		i++;
		if(i < n)
		{
			putchar(',');
			putchar(' ');
			
		}
	}
	putchar(10);
}
