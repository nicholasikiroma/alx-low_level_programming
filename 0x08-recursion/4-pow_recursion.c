#include "main.h"
/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: input integer
 * @y: exponential
 * Return: -1 if y < 0, x exponential otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
