#include "main.h"
/**
 * _strcpy - copies string pointed to bg src
 * @dest: destination pointer
 * @src: pointer
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	for (; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}

	return (dest);
}
