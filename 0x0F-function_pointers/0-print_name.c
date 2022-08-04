#include "function_pointers.h"
/**
 * print_name - Function that prints a name
 * @name: Pointer to address that holds a name to be printed
 * @f: Pointer to function that takes a character as argument
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
