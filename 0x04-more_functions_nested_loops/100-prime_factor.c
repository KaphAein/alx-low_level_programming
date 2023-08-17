#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a, f;

	a = 612852475143;
	for (f = 2; a / f > 1; f++)
	{
		if (a % f == 0)
		{
			a = a / f;
		}
		else
			continue;
	}
	printf("%ld\n", a);
	return (0);
}
