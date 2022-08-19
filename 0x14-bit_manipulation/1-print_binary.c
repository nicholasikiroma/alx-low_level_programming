#include "main.h"

/**
 * print_binary - prints binary representations of a number
 * @n: number to be represented in binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> 1;

		if (n & current)
		{
			_putchar('1');
		}
		else
			_putchar('0');
	}
}
