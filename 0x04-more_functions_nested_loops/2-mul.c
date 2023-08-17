#include "main.h"

/**
 * mul -  multiplies 2 numbers.
 * @a: number to be mult.
 * @b: number to be mult.
 * Return: 0 success.
 */

int mul(long a, long b)
{
	long mult, divisor, digit;

	mult = a * b;
	divisor = 1;

	if (mult >= 0)
	{
		while ((mult / divisor) >= 10)
			divisor *= 10;
		while (divisor > 0)
		{
			digit = (mult / divisor) % 10;
			putchar(digit + '0');
			divisor /= 10;
		}
	}
	if (mult < 0)
	{
		mult = -mult;
		_putchar('-');
		while ((mult / divisor) >= 10)
			divisor *= 10;
		while (divisor > 0)
		{
			digit = (mult / divisor) % 10;
			putchar(digit + '0');
			divisor /= 10;
		}
	}
	_puthcar('\n');
}
