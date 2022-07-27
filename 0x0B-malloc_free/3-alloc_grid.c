#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Returns a pointer to 2-dimensional array of integars.
 * @width: width of array
 * @height: height of array
 *
 * Return: Pointer to integar, NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int **num;
	int n, m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	num = (int **)malloc(sizeof(int *) * height);
	if (num == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		num[n] = (int *)malloc(sizeof(int) * width);
		if (num[n] == NULL)
		{
			for (m = 0; m < n; m++)i
				free(num[m]);
			free(num);
			return (NULL);
		}
		for (m = 0; m < width; m++)
		{
			num[n][m] = 0;
		}

	}
	return (num);
}
