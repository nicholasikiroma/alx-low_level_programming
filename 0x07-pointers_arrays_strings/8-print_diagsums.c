#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of two diagonals of a square matrix of integers
 * @a: input array
 * @size: dimension of array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[(size + 1) * i];
		diag2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", diag1, diag2);
}
