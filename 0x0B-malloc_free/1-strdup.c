#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - for duplicating the string and memory allocating
 * @str: char
 * Return: 0.
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		s[j] = str[j];

	return (s);
}

