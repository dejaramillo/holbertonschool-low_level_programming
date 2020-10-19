#include <stdio.h>
/**
 *main - print number of arguments
 *@argc: Number of arguments passed
 *@argv: Array of strings
 *Return: 0 (success)
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
