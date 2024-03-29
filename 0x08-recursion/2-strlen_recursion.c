#include "main.h"

/**
 * _strlen_recursion - function to return length of a string.
 * @s: string to be measured.
 *
 * Return: returns the length of the string.
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}

	return (l);
}

