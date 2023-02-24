#include "main.h"
/**
 * print_last_digit -print last digit
 * @int: value entered.
 * Description: checks for and prints last digit of a number.
 *
 * Return: Return (0) Always (Success)
 */

int print_last_digit(int n)
{
	if (n > 5)
	{
		_putchar(n);
	}
	else if (n == 0)
	{
		_putchar(n);
	}
	else if (n < 6 && n != 0)
	{
		_putchar(n);
	}
	return (0);
}
