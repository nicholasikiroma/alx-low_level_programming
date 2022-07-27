#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * @size: size of array
 * @c: Input character
 *
 * Return: Pointer to an array on success, NULL otherwise.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size ==  0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
