#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Input string
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	char cha[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;
	while (str[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == cha[j])
				str[i] = num[j];
		}
		i++;
	}
	return (str);
}
