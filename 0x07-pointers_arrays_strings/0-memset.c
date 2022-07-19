#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to a character which serves as the destination address
 * @b: Source of input
 * @n: number of bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
