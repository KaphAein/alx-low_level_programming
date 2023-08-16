#include "main.h"

/**
 * print_times_table - function that prints multiplications tables.
 *@n: integer to be analyzed.
 *
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = j * i;
				if (j == 0)
				{
					_putchar(result + '0');
				} else if (result < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				} else if (result >= 10 && result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				} else if (result >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
