#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Pointer to destinatin string
 * @src: Pointer to string
 * @n: number of bytes
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
