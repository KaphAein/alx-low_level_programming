#include "main.h"

/**
 *  print_to_98 - function that prints numbers up to 98.
 * @n: integer to be checked.
 *
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
	while (n <= 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	}
	else
	{
	while (n >= 98)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
	}
}
