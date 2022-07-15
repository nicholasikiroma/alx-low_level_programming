#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to a string
 * @src: Pointer to a string
 * @n: number of bytes
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	int ind, j;

	ind = 0;
	while (dest[ind] != '\0')
	{
		ind++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[ind++] = src[j++];
	}
	dest[ind] = '\0';
	return (dest);
}
