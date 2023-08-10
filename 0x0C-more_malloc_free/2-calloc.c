#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: number of bytes allocated
 *
 * Return: NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = nmemb * size;
	a = malloc(t);
	if (a == NULL)
		return (NULL);
	/* set memory to zero*/
	memset(a, 0, t);
	return (a);

}
