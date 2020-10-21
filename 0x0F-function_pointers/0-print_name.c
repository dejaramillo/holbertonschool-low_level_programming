#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_name - print name
 *@name: name of the person
 *@f: funtion is a pointer
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
