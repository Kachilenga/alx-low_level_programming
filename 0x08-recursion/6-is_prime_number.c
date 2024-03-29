#include "main.h"

int real_prime(int n, int i);
/**
 * real_prime - checks if a number is prime using recursion
 * @n: number to check
 * @i: number to iterate
 *
 * Return: 1 if n is prime, 0 if not
 */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}


/**
 * is_prime_number - checks if an integer is a prime number or not
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

