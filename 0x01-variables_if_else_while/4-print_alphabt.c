#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print lowercase alphabets except q and e
 * Return: 0 for success
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if (alphabet == 'q' || alphabet == 'e')
			continue;
		else
			putchar(alphabet);
	putchar('\n');
	return (0);
}

