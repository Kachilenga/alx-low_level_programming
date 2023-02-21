#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: variable for checking alphabet
 *
 * Description: This checks for alphabet char
 * Return: return 1 if is alphabet
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
