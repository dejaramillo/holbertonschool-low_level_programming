#include "holberton.h"
/**
 * jack_bauer - print all minutes of jack
 * Return: void
 */

void jack_bauer(void)
{
int hr, mn;
for (hr = 0; hr <= 23; hr++)
{
for (mn = 0; mn <= 59; mn++)
{
_putchar(48 + (hr / 10));
_putchar(48 + (hr % 10));
_putchar(':');
_putchar(48 + (mn / 10));
_putchar(48 + (mn % 10));
_putchar('\n');
}
}
}