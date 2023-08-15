#include "main.h"

/**
 * times_table - function that prints multiplications table.
 *
 *
 */

void times_table(void)
{
	int i, j, mult;

	for (i = 1; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			mult = i * j;
			if (mult < 10)
				_putchar(' ');
			else
				_putchar(mult / 10 + '0');
			_putchar(mult % 10 + '0');
		}

		_putchar('\n');
	}
}
