#include "main.h"

/**
 * print_alphabet - for printing the alphabet
 * @void: not return value
 *
 * Description: Function is used to print lowercase
 * alphabet
 * Return : return void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
