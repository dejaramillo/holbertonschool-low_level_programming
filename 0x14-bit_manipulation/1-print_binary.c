#include "holberton.h"
/**
 *print_binary - function that print binary of the interger
 *@n: argument
 *Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	(n & 1) ? _putchar('1') : _putchar('0');
}
