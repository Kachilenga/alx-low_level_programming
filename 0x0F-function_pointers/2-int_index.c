#include <stdlib.h>

/**
 * int_index- function for searching for integer
 * @array: the array of integers
 * @size: size of the array to search in
 * @cmp: function pointer that is passed
 *
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
