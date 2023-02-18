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
	int hundred = '0';

	for (hundred = '0'; hundred <= '9'; hundred++)
	{
		for (ten = '0'; ten <= '9'; ten++)
		{
			for (one = '0'; one <= '9'; one++)
			{
				if (!((one == ten) || (ten == hundred) ||
							(ten > one) || (hundred > ten))) /*gets rid of repetition*/
				{
					putchar(hundred);
					putchar(ten);
					putchar(one);
					if (!(one == '9' && hundred == '7' &&
								ten == '8')) /*for adding spaces and commas*/
					{
						putchar(',');
						putchar(' ');
					}
				}	}
		}
	}
	putchar('\n');
	return (0);
}
