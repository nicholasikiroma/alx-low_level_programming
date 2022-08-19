#include "main.h"
/**
 * get_bit - Functions returns the value of a bit at a given index
 * @n: number to check bits
 * @index: index to check bit
 *
 * Return: Value of the bit at index, 0 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int chk, div;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	div = 1 << index;
	chk = n & div;
	if (chk == div)
		return (1);
	return (0);
}
