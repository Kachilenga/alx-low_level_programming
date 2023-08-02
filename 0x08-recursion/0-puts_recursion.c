#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion -function that prints the string followed by new line
 * @s: variable holding the string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
