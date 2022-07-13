#include "main.h"

/**
 * print_rev - Prints string in reverse order
 * @s: input string
 * Return: reversed string
 */

void print_rev(char *s)
{
	int r;

	r = 0;
	while (s[r] != '\0')
	{
		r++;
	}
	for (r = r - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
