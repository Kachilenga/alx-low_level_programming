#include "main.h"
#include <stdio.h>

/**
 * print_t0_98 - prints natural numbers
 * @n: variable to print
 *
 * Description: This function prints all natural nums
 */

void print_to_98(int n)
{

	for (n = 0; n <= 98; n++)
	{
		printf("%d", n);
		if (n < 98)
		{
			printf(", ");
		
		}
	}
	
}
