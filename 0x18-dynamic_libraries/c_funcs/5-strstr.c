#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: pointer to string address
 * @needle: pointer to substring address
 * Return: Pointer to beginning of matched substring, NULl otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int n = 0, j = 0;

	while (haystack[n])
	{
		while (needle[j] && (haystack[n] == needle[0]))
		{
			if (haystack[n + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			n++;
			j = 0;
		}
		else
			return (haystack + n);
	}
	return (0);
}
