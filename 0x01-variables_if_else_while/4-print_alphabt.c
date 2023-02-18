#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{

	char i;

	i = 'a';
	while	(i <= 'z')
       	{
		if ((i != 'q' && i != 'e') && i <= 'z')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
