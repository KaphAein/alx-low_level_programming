#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long a, b, sum, sumofsums;

	a = 1;
	b = 2;
	sumofsums = 0;
	for (i = 0; i < 48; i++)
	{
		sum = a + b;
		if (sum % 2 == 0 && sum < 4000000)
		{
			sumofsums += sum;
		}
		a = b;
		b = sum;
	}
	printf("%ld", sumofsums + 2);
	printf("\n");
	return (0);
}
