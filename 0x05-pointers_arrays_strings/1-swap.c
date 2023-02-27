#include "main.h"
/**
 * swap_int - swap the integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *b;
	*b = *a;
	*a = k;
}
