#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: loop to print alphabets in lowercase using  putchar()
 *Return: 0 Always success
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar(toupper(x));
	}
	putchar('\n');
	return (0);
}
