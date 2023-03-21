#include <stdlib.h>
#include "dog.h"
/**
 * free_dog- frees the dog d
 * @d: the alias for dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
