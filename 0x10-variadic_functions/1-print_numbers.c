#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: numbrr of integers passed into the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int indx;
	va_list list;
	int num;

	va_start(list, n);

	for (indx = 0; indx < n; indx++)
	{
		num = va_arg(list, int);
		printf("%d", num);

		if (indx < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
