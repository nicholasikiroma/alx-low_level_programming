#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: variable for input string
 * @c: Character searched for
 * Return: Pointer to first occurrence of c or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (0);
}
