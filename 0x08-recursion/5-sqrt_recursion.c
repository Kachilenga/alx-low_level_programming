#include "main.h"

int find_srt(int number, int sroot);
int _sqrt_recursion(int n);

/**
 * find_srt - Find the square root of given number
 * @number: number to find the square root of
 * @sroot: square root to be tested
 *
 * Return: If the number has a square root - the square root.
 *         If the number does not have a square root - -1.
 */

int find_srt(int number, int sroot)
{
	if ((sroot * sroot) == number)
		return (sroot);

	if (sroot == number / 2)
		return (-1);

	return (find_srt(number, sroot + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);


	if (n == 1)
		return (1);

	return (find_srt(n, root));
}

