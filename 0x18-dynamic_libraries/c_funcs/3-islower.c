#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: Takes a character
 * Return: 1 for success, 0 for failure
 */

int _islower(int c)
{
	if ((c > 'a') && (c < 'z'))
		return (1);
	else
		return (0);
}
