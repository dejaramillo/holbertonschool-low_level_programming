#include <stdio.h>

/**
 * main - Print a string using puchar
 *
 * Return: loop
 */
int main(void)
{
char lt1;
for (lt1 = 'a'; lt1 <= 'z'; lt1++)
putchar(lt1);
for (lt1 = 'A'; lt1 <= 'Z'; lt1++)
putchar(lt1);
putchar('\n');
return (0);
}
