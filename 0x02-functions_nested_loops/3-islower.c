#include "main.h"

/**
 * _islower - Check for lower case letter
 * @c: variable used to check
 * Return: 1 if c is lowercase
 */

int _islower(int c)
{
	int result;

	if (c <= 'a' && c <= 'z')
	{
		result = 0;
	}
	else
		result = 1;
	return (result);
}
