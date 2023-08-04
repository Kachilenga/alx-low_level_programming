#include "main.h"
/**
 * _strlen(char *s)- returns length of a string
 * @s: points to the string
 * Return: length
 */
int _strlen(char *s)
{
	int lng = 0;

	while (*s != '\0')
	{
		lng++;
		s++;
	}
	return (lng);
}
