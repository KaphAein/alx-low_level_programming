#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long long a, f;

	a = 612852475143;
	f = 2;
	for (f; a / f > 1; f++)
	{
		if (a % f == 0)
		{
			a = a / f;
		}
		else
			continue;
	}
	printf("%llu\n", a);
	return (0);
}
