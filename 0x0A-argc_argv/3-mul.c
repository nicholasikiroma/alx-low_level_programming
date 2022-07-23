#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Product of two numbers
 */

int main(int argc, char **argv)
{
	int num1 = 0;
	int num2 = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}

	return (0);
}
