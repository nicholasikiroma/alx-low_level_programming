#include "main.h"

/**
 * reverse_array - Reverses elements of an array
 * @a: Input array.
 * @n: number of elements
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
