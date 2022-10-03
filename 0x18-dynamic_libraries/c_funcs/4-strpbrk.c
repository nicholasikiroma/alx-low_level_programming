#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing characters to match
 * Return: Pointer that matches one of the bytes in accept, NULl otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
