#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: Input integer
 * Return: 1 if n is 0, -1 if n < 0, factorial of n otherwise
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
