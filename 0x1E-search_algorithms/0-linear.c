#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers.
 * @array: Pointer to first element of array
 * @size: length of the array
 * @value: the value searched for
 * Return: The value searched for, otherwise -1
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (value && array)
    {
        for (i = 0; i < size; i++)
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
            if (array[i] == value)
                return (i);
        }
    }
    return (-1);
}
