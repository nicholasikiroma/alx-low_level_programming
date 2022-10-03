#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @src: Pointer to char (source)
 * @dest: Pointer to char (destination)
 * @n: number of bytes
 * Return: pointer of destination address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
