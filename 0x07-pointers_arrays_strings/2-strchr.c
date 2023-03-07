#include "main.h"
/**
 * _strchr - prints a strings to stdout
 * @s: what to print
 * @c: what to compare
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{

	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
