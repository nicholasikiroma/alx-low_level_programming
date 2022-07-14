#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int a, j, n, m;

	a = n = 0;
	m = 1;
	while ((*(s + a) < '0' || *(s + a) > '9') && (*(s + a) != '\0'))
	{
		if (*(s + a) == '-')
			m *= -1;
		a++;
	}
	j = a;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (n);
}
