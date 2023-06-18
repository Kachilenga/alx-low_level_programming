#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 *
 * Return: the pointer to the allocated memory
 * on error, produce status of 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int lens1, lens2, lenconcat;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;
	if (n > lens2)
		n = lens2;
	lenconcat = lens1 + n;
	concat = malloc(lenconcat + 1);

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < lenconcat; i++)
	{
		if (i < lens1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - lens1];
	}
	concat[i] = '\0';
	return (concat);

}
