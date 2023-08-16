#include "main.h"

/**
 * print_times_table - function that prints multiplications tables.
 *@n: integer to be analyzed.
 *
 */

void print_times_table(int n)
{
	int i, j, mult;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				mult = i * j;
				if (mult < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (mult > 10 && mult < 100)
						{
							_putchar(mult / 10 + '0');
							_putchar(' ');
						}
				else
						{
						_putchar(mult / 100 + '0');
						_putchar(mult / 10 + '0');
						}
				_putchar(mult % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
