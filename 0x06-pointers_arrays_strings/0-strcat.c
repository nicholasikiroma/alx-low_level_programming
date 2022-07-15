#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Pointer to destination char variable
 * @src: Pointer to string
 * Return: Char
 */

char *_strcat(char *dest, char *src)
{
	int index, j;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[index++] = src[j++];
	}
	dest[index] = '\0';
	return (dest);
}
