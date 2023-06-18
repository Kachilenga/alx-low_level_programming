#include <stdlib.h>
#include "main.h"

/**
 * array_range - the array of integers
 * @min: the minimum range of the array
 * @max: the maximum range of the array
 *
 * Return: Null if min > max
 * Null if malloc fails
 */

int *array_range(int min, int max)
{
	int *ptr_arr;
	int j;

	if (min > max)
		return (NULL);
	ptr_arr = malloc(sizeof(*ptr_arr) * ((max - min) + 1));

	if (ptr_arr == NULL)
		return (NULL);
	for (j = 0; min <= max; j++, min++)
		ptr_arr[j] = min;
	return (ptr_arr);
}

