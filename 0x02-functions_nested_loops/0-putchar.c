#include "main.h"

/**
 * main - Entry point
 *
 * Return: Program returns 0 for success
 */

int main(void)
{
	char c[] = "_putchar";
	int msg;

	for (msg = 0; msg <= 7; msg++)
		_putchar(c[msg]);

	_putchar('\n');

	return (0);
}
