#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long a, b, sum;

	a = 1;
	b = 2;
	printf("%d, %d, ", a, b);
	for (i = 0; i < 48; i++)
	{
		sum = a + b;
		printf(", ");
		printf("%d", sum);

		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
