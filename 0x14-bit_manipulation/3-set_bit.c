#include "main.h"
/**
 * set_bit - Functions sets the value of a bit to 1 at a given index
 * @n: number to check bits
 * @index: index to check bit
 *
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);


	check = 1 << index;
	*n = *n | check;
	return (1);
}
