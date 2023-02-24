#include "main.h"

/**
 * print_sign - check sign
 * @n: variable for checking sign
 *
 * Description: Check the sign of a number
 * Return: 1 if number is positive
 */

int print_sign(int n)
{
	/*char sign;*/
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0' + result);
	}
	else
	{
		result = -1;
		_putchar('-');
	}
	return (result);
}
