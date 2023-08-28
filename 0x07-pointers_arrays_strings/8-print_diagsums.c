#include "main.h"

/**
 * print_diagsums - function that takes elements
 * @a: element
 * @size: element
 * Return: void
 */

void print_diagsums(int a[][size], int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[i][size - i - 1];
	}
	printf("%d, %d", sum1, sum2);
}
