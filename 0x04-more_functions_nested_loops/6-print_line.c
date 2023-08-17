#include "main.h"

/**
 * print_lines - prints lines.
 * @n: number of lines.
 * Return: void.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
			break;
		else
			_putchar('_');
	}
	_putchar('\n');
}
