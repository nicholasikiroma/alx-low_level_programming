#include "search_algos.h"
/**
 * print_ele- displays elements of the array
 * @array: the array to print it's contents
 * @start: first index of the array
 * @end: the last index of the array
 * Return: nothing
 */
void print_ele(int *array, int start, int end)
{
	int i;

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in @array
 * @value: value to search for in @array
 * Return: first index where @value is located, (-1) if @array is NULL or
 * @value is not found in @array
 */
int binary_search(int *array, size_t size, int value)
{
	int lf, rh, mid;

	if (!array)
		return (-1);

	lf = 0;
	rh = (size - 1);
	while (lf <= rh)
	{
		printf("Searching in array: ");
		print_ele(array, lf, rh);
		mid = (lf + rh) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			rh = lf - 1;
		else if (value > array[mid])
			lf  = mid + 1;
	}
	return (-1);
}
