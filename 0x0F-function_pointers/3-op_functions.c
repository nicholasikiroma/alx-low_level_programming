#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 * Return: Division of a by b
 */


int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculate modulus of two integers
 * @a: First integer
 * @b: Second integer
 * Return:  returns the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
