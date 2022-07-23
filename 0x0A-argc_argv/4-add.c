#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, dig = 0, n;


	for (i = 1; i < argc; i++)
	{
		for (n = 0; n < argc; n++)
		{
			if (isdigit(argv[i][dig]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
