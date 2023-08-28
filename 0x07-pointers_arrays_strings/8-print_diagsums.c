#include "main.h"

/**
 * print_diagsums - function that takes elements
 * @a: element
 * @size: element
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	i = 0;
	j = size - 1;
	while (i < (size * size) && j >= 0)
	{
		sum1 += a[i];
		sum2 += a[j];
		i += size + 1;
		j -= size - 1;
	}
	printf("%d, %d", sum1, sum2);
}
