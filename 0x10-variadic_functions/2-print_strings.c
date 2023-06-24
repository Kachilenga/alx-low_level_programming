#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings- function to print strings
 * @separator: character to be printed between numbers
 * @n: number of numbers to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	char *str;
	unsigned int i;

	va_start(pn, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pn, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pn);
}
