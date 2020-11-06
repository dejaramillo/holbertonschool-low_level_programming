#include "holberton.h"
/**
 *get_bit - function that the value of a bit at given index
 *@n: number  of argument
 *@index: index for print
 *Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;

	if (n & 1)
		return (1);

	return (0);
}
