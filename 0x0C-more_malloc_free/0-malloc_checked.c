#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - checks if malloc is allocating memory
 * @b: the variable whose memory will be allocated
 * Return: 1 if malloc is successful
 *	98 if malloc failed
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
