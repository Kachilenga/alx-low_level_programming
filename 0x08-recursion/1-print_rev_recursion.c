#include "main.h"

/**
 * _print_rev_recursion - Fuction that prints a string in reverse.
 * @s: Hold string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
