#include "main.h"

/**
 * print_number -  prints number
 * @n: number to be printed.
 *
 * Return: void.
 */

void print_number(int n)
{
	int divisor, digit;

	divisor = 1;

	if (n >= 0)
	{
		while ((n / divisor) >= 10)
			divisor *= 10;
		while (divisor > 0)
		{
			digit = (n / divisor) % 10;
			_putchar(digit + '0');
			divisor /= 10;
		}
	}
	if (n < 0)
	{
		n = -n;
		_putchar('-');
		while ((n / divisor) >= 10)
			divisor *= 10;
		while (divisor > 0)
		{
			digit = (n / divisor) % 10;
			_putchar(digit + '0');
			divisor /= 10;
		}
	}
}
