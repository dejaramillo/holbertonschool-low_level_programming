#include "holberton.h"
/**
 *swap_int - print two numbers change
 *@a: first entry point
 *@b: second entry point
 *Return: void
 */

void swap_int(int *a, int *b)
{
int change;
	change = *a;
	*a = *b;
	*b = change;
}
