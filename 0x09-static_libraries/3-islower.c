#include "main.h"

/**
 * _islower(int c)- function to check for character lower
 * @c: parameter to check
 *
 * Description: this functions checks if
 * entered arg is a lower character
 * Return: returns 1 if success
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
