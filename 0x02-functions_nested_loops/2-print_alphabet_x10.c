#include "main.h"

/**
 * print_alphabet_x10 - Used to print the alphabet 10 times
 *
 * Description: used to print the alphabet in lower case 10 times
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	j = 0;
	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}
}
