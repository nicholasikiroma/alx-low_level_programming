#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: String argument
 *
 * Return: Pointer to string, NULL otherwise
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		;
	}
	i++;
	ptr = malloc(i * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
