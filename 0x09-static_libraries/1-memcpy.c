#include "main.h"
/**
 * _memcpy - prints a strings to stdout
 * @dest: what to print
 * @src: what to compare
 * @n: when to check
 *
 * Return: copied memory with bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
