#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Program returns 0 for success
 */

int main(void)

{
	char msg[] = "_putchar\n";

	write(1, msg, sizeof(msg));

	return (0);
}
