#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @n: Takes integer as input
 * Return: 0 for failure
 */

int _abs(int n)
{
	if (n < 0)
		return (n = n * (-1));
	else
		return (n);
}
