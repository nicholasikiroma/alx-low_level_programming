#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * Parameters: rand(), RAND_MAX
 *
 * Description: Determine positive numbers from random selection
 * Return: 0 after completion
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is a positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
