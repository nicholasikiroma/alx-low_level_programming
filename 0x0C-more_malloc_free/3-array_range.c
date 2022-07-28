#include "main.h"
#include "stdlib.h"
/**
 * array_range - Creates an array of integars
 * @min: First argument
 * @max: Second argument
 * Return: Pointer to array of integars, Null otherwise
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++,  min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
