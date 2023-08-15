#include "main.h"

/**
 *  print_last_digit - function that prints last digit.
 * @n: integer to be checked.
 *
 *
 */

void print_to_98(int n)
{
	for (n; n<=98; n++)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	for (n; n>=98; n--)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

}
