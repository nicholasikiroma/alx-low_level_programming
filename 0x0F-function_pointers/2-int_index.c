#include "function_pointers.h"
/**
 * int_index - Searches for an integar
 * @array: Pointer to array
 * @size: number of elements in array
 * @cmp: Pointer to function used to compare values
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int indx;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (indx = 0; indx < size; indx++)
		{
			if (cmp(array[indx]))
				return (indx);
		}
	}
	return (-1);
}
