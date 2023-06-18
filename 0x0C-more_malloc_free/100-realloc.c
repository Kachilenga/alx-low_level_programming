#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory previously allocated
 * @old_size: size of the memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: ptr
 * if new_size == old_size return ptr no changes
 * if ptr == null then return malloc has failed
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);

}
