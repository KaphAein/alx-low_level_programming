#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, sum;

	sum = 0;

	for (int n = 0, n < 1024, n++)
	{
		for (n % 3 = 0 || n % 5 = 0)
		{
			sum = sum + n;
		}
	}
	printf ("sum of natural numbers below 1024 = %d", sum);
    return (0);
}