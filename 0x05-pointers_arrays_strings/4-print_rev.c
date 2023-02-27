#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 * return: Always 0
 */

void print_rev(char *s)
{
	int lng = 0;
	int i;

	while (*s != '\0')
	{
		lng++;
		s++;
	}
	s--;
	for (i = lng; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
