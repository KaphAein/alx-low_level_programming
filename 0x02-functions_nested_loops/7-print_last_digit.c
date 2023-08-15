#include "main.h"

/**
 *  print_last_digit - function that prints last digit.
 * @num: integer to be checked.
 *
 * Return: last digit
 */

int print_last_digit(int num)
{
	int res;

	if (num < 0)
	{
		num = -num;
	}

	res = num % 10;
	_putchar(res);
	return (res);
}
