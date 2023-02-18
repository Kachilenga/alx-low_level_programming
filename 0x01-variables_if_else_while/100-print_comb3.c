#include <stdio.h>
/**
 * main -Entry point
 * Description: this is where the programme
 * first starts executing
 *
 * Return: Return (0) Always (Success)
 */
int main(void)
{
	int one = '0';
	int ten = '0';

	for (ten = '0'; ten <= '9'; ten++)/* prints tens digit*/
	{
		for (one = '0'; one <= '9'; one++)
		{
			if (!((one == ten) || (ten > one)))
			{
				putchar(ten);
				putchar(one);
				if (!(one == '9' && ten == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
