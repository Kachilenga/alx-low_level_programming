#include "main.h"

/**
 * _pow_recursion - Return the value of x to the power of y
 * @x: The number to be raised
 * @y: The power
 *
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	res *= _pow_recursion(x, y - 1);

	return (res);
}

