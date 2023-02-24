#include "main.h"
#include <stdio.h>

/**
 * times_table - printing the times table
 */

void times_table(void)
{
	int i;
	int j;
	int n = 9;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", i * j);
			if (j < n)
			{
				printf(",  ");
			}
		}
	printf("\n");
	}
}
