#include "holberton.h"
/**
 *binary_to_uint -  convert interger or binary
 *@b: pointer whith direction
 *Return: result of number
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j = 1, k;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	for (k = 0; b[k] != '\0'; k++)
		;

	for (i = k - 1; i >= 0; i--, j *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] & 1)
			res += j;
	}

	return (res);
}
