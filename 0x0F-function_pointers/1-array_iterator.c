#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: Pointer to array
 * @size: size of array
 * @action: Pointer to executable function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size > 0 && action != NULL)
	{
		while (size-- > 0)
			action(*array++);
	}
}
