#include <stdio.h>

/** more headers goes there*/
/**
 * main -Entry point
 * Description: this is where the programme
 * first starts executing
 *
 * Return: Return (0) Always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
