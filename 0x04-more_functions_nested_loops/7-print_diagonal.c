#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the character should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (k = 1; k < i; k++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
