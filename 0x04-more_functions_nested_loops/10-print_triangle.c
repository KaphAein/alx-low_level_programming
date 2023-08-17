#include "main.h"

/**
 * print_triangle - prints triangle.
 * @size: dimension of triangle.
 * Return: void.
 */

void print_triangle(int size);
{
	int i, j, k;

	if (size > 0)
	{
		for (k = 1; k <= size; k++)
		{
			for (j = 0; j < (size -k); j++)
			{
				_putchar(' ');
			}

			for (i = 0; i < k; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
