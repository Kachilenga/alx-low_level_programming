#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes dog
 * @struct dog- structure of dog
 * @d: pointer to dog
 * @name: pointer to name of dog
 * @age: point to age of dog
 * @owner: pointer to owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
