#include "main.h"
/**
 * _strspn - function calculates length of prefix substring
 * @s: string checked
 * @accept: section accepted
 * Return: Number of bytes of initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int n, i;

	for (n = 0; s[n]; n++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[n] == accept[i])
				break;
		}
		if (!accept[i])
			break;
	}
	return (n);
}
