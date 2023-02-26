#include "main.h"

/**
 * more_numbers - this prints numbers from 0 to 9
 */

void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
