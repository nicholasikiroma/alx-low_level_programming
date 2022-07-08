#include "main.h"

/**
 * print_square - Prints a square followed by a new line.
 * @size: Defines the size of the square.
 * Return: square
 */

void print_square(int size)
{
	int i;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 1 ; i <= size; i++)
		{
			for (k = 1; k <= size; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
