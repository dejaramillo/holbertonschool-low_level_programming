#include <stdio.h>
#include <stdlib.h>
/**
 *main - print mul
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int r1, r2;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	r1 = atoi(argv[1]);
	r2 = atoi(argv[2]);
	printf("%d\n", r1 * r2);
	return (0);
}
