#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: from (included)
 * @max: to (included)
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, *a, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	a = malloc(sizeof(int) * size);
	if (a  == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = min + i;

	return (a);
}
