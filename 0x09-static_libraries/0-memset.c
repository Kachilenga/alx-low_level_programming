#include "main.h"
/**
 * _memset - prints a strings to stdout
 * @s: what to print
 * @b: what to compare
 * @n: when to check
 *
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;										}		
	return (s);
}
