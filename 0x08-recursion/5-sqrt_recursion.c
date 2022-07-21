#include "main.h"

/**
 * check - Evaluates square root
 * @i: control to check
 * @j: integer to be checked
 * Return: 1 or 0
 */

int check(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (check(i + 1, j));
	}
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: input integer
 * Return: natural square root of number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (check(1, n));
	}
}
