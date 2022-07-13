#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Stores input string
 * Return: reversed string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count;
	int j;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}

	for (j = 0; j < count; j++)
	{
		count--;
		rev = s[j];
		s[j] = s[count];
		s[count] = rev;
	}
}
