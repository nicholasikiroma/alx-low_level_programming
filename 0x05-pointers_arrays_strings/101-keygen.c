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
	int a, j, b, s;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (s != 2772)
	{
		a = b = s = 0;
		while ((2772 - 122) > s)
		{	j = rand() % 62;
			p[a] = c[j];
			s += c[j];
			a++;
		}
		while (c[b])
		{
			if (c[b] == (2772 - s))
			{
				p[a] = c[b];
				s += c[b];
				a++;
				break;
			}
			b++;
		}
	}
	p[a] = '\0';
	printf("%s\n", p);
	return (0);
}
