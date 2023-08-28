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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
			if (j == (size - i - 1))
				sum2 += a[i][(size - i - 1)];
		}
	}
	printf("%d, %d", sum1, sum2);
}
