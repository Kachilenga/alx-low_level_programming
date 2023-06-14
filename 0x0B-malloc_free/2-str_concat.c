#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate strings
 * @s1: first variable
 * @s2: second variable
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *conca;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	conca = malloc(sizeof(char) * (i + j + 1));

	if (conca == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		conca[i] = s1[i];
		i++;
	}


	while (s2[j] != '\0')
	{
		conca[i] = s2[j];
		i++;
		j++;
	}
	conca[i] = '\0';
	return (conca);
}
