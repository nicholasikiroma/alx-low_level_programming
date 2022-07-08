#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 - 9 (exluding 2 and 4).
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		if (num == 50 || num == 52)

			continue;

		else

			_putchar(num);

	}
	_putchar('\n');
}
