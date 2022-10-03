#include "main.h"

/**
 * _isalpha - Checks if character is lowercase or uppercase
 * @c: Takes input characters
 * Return: 1 for success, 0 for failure
 */

int _isalpha(int c)
{
	if (((c > 'a') && (c < 'z')) || ((c > 'A') && (c < 'Z')))
		return (1);
	else
		return (0);
}
