#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * Return: Always 0
 */

int main(void)
{
	int i;
	char j;

	j = 'a';
	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

