#include "main.h"

/**
 * _isalpha(int c)- function to check for character
 * @c: parameter to check
 *
 * Description: this functions checks if
 * entered arg is a character
 * Return: returns 1 if success
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		result = 1;
	}
	else
		result = 0;
	return (result);
}
