#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number with printf
 *
 * Return: loop with number
 */
int main(void)
{
int numbers;
while (numbers <= 9)
{
printf("%d", numbers++);
}
printf("\n");
return (0);
}
