#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function
 * @width: element
 * @height: element
 * Return: int or NULL
 */

int **alloc_grid(int width, int height)
{
	int **a;
	unsigned int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (i = 0, i < height, i++)
	{
		a[i] = malloc(sizeof(int) * width)

			if (a[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(a[j]);
				free(a);
				return (NULL);
			}
		for (j = 0, j < width, j++)
		{
			a[i][j] = 0;
		}
		return (a);
}
