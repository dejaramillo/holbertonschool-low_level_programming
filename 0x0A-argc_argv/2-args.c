#include <stdio.h>
/**
main - print arguments
*@argc: number of arguments
*@argv: array of characters
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
