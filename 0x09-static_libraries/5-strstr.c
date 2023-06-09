#include "main.h"
/**
 * _strstr - prints a strings to stdout
 * @haystack: what to print
 * @needle: what to compare
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
