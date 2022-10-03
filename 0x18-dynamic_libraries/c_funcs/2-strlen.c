#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: pointer to a char variable.
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
