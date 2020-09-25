#include <stdio.h>
/**
 *main - print fizz buzz in a number list
 *Return: 0 (success)
 */

int main(void)
{
	int num;
	for(num = 1; num <= 100; ++num)
	{
		if (num % 15 == 0)
		{
			printf("Fizz Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		printf(" ");
	}
	putchar(10);
	return (0);
}