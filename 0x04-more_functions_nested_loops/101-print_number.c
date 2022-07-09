#include "main.h"

/**
 * print_number - Prints integer
 * @n: stores integar
 * Return: Integar
 */

void print_number(int n)
{
	unsigned int num, con, p;

	if (n < 0)
	{
		_putchar(45);
		p = n * -1;
	}
	else
	{
		p = n;
	}
	num = p;
	con = 1;

	while (num > 9)
	{
		num /= 10;
		con *= 10;
	}

	for (; con >= 1; con /= 10)
	{
		_putchar(((p / con) % 10) + '0');
	}
}
