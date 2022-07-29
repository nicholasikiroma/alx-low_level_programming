#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: First string argument
 * @s2: Second string argument
 * @n: number bytes to be allocated
 * Return: Pointer to allocated memory, return NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, k, j;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
	{
		k = 0;
	}
	else
	{
		for (k = 0; s2[k]; k++)
			;
	}
	if (k > n)
		k = n;
	ptr = malloc(sizeof(char) * (i + k + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ptr[j] = s1[j];
	for (j = 0; j < k; j++)
		ptr[j + i] = s2[j];
	ptr[i + k] = '\0';
	return (ptr);
}
