#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
/**
 *struct form - pointer for print all
 *
 *@a: operator
 *@f: pointer function
 */

typedef struct form
{
	char *a;
	void (*f)(va_list);
} fr;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void fnchar(va_list x);
void fnint(va_list x);
void fnfloat(va_list x);
void fnstring(va_list x);

#endif
