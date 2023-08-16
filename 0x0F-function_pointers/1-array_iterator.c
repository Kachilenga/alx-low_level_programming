#include <stdlib.h>

/**
 * array_iterator- function to iterate through the array
 * @array: the array being iterated
 * @size: size of the array
 * @action: pointer to the function being used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
