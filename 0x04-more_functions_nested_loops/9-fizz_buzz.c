#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	char fb[] = "FizzBuzz";
	char f[] = "Fizz";
	char b[] = "Buzz";

	for (n = 1; n <= 100; n++)
	{
		if (n == 100)
		{
			printf("%s", b);
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("%s ", fb);
		}
		else if (n % 3 == 0)
		{
			printf("%s ", f);
		}
		else if (n % 5 == 0)
		{
			printf("%s ", b);
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
