#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: loop to print alphabets in lowercase using  putchar()
 * Return: 0 Always success
 */

int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	return (0);
}
