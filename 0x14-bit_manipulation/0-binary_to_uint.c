#include "main.h"
/**
 * binary_to_uint - Converts a binary to an unsigned integeer
 * @b: Pointer to a string containing a binary number
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int indx;
	unsigned int unit = 0;

	if (!b)
		return (0);
	for (indx = 0; b[indx] != '\0'; indx++)
	{
		if (b[indx] != '0' && b[indx] != '1')
			return (0);
	}
	for (indx = 0; b[indx] != '\0'; indx++)
	{
		unit <<= 1;
		if (b[indx] == '1')
			unit += 1;
	}
	return (unit);
}
