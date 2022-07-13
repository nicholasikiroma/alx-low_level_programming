#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: pointer of int a.
 * @b: pointer to int b.
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	int dm;

	dm = *a;
	*a = *b;
	*b = dm;

}
