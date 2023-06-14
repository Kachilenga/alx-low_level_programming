#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function to create an array
 * @size: check the size of the array
 * @c: holds the characters
 * Return: a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *kachi;
	unsigned int k;

	kachi = malloc(sizeof(char) * size);
	if (kachi == NULL || size == 0)
	{
		return (NULL);
	}
	for (k = 0; k < size; k++)
		kachi[k] = c;
	return (kachi);
}
