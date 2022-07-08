#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: Takes a character as input
 * Return: 1 for digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
