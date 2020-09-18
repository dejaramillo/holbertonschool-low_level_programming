#include <stdio.h>
/**
 * 
 * main - alphabet lowercase
 * 
 * retrun - 0
 */

int main(void)
{
char letter = 97;
while (letter < 122)
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
