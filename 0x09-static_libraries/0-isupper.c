#include "main.h"

/**
 * _isupper(int c)- function to check for character lower
 * @c: parameter to check
 *
 * Description: this functions checks if
 * entered arg is an upper character
 * Return: returns 1 if success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
