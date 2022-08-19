#include "main.h"
/**
 * flip_bits - function that caculates the bit difference between two numbers
 * @n: number to check bits
 * @m: second number
 *
 * Return: number of bits you need tp flip to get another number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num, indx;
	unsigned long int value, diff;

	diff = n ^ m;
	value = 1;
	num = 0;
	for (indx = 0; indx < (sizeof(unsigned long int) * 8); indx++)
	{
		if (value == (diff & value))
			num++;
		value <<= 1;
	}
	return (num);
}





