#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string argument
 * @s2: Second string argument
 * Return: Pointer to concatenated string, NULL otherwise.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *str;

	if (s1 == NULL)
		i = 0;

	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; j++)
		{
			;
		}
	}
	k = i + j;

	str = (char *)malloc(k * sizeof(char) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < i; l++)
	{
		str[l] = s1[l];
	}
	for (l = 0; l < j; l++)
	{
		str[l + i] = s2[l];
	}
	str[i + j] = '\0';
	return (str);
}
