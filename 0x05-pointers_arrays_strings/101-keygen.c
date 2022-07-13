#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: 0.
 */

int main(void)
{
	int pass;

	srand(time(0));
	pass = rand();
	printf("%i\n", pass);
	return (0);
}
