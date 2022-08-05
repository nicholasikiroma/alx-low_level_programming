#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - prints a character
 * @c: character to print
 *
 * Return: nothing
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - prints an integer
 * @i: integer to print
 *
 * Return: nothing
 */

void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_s - Prints a string
 * @s: string to print
 *
 * Return: nothing
 */

void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_f - Prints a float
 * @f: float to print
 *
 * Return: nothing
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - Prints anything
 * @format: list of input arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int indx, k;
	print_p p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL},
	};
	va_list list;
	char *separator = "";

	va_start(list, format);
	indx = 0;
	while (format && format[indx])
	{
		k = 0;
		while (p[k].p != NULL)
		{
			if (*(p[k].p) == format[indx])
			{
				printf("%s", separator);
				p[k].j(list);
				separator = ", ";
				break;
			}
			k++;
		}
		indx++;
	}
	va_end(list);
	printf("\n");
}

