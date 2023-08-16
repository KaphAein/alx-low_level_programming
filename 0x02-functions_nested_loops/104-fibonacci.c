#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long a, b, a1, a2, b1, b2, sum, sum1, sum2;
	unsigned long l = 1000000000;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (i = 0; i < 96; i++)
	{

		if (i <= 88)
		{
		sum = a + b;
		printf(", ");
		printf("%ld", sum);
		a = b;
		b = sum;
		}

		a1 = (a / l);
		a2 = (a % l);
		b1 = (b / l);
		b2 = (b % l);
		sum1 = (sum / l);
		sum2 = (sum % l);

		if (i > 88)
		{
			sum1 = a1 + b1;
			sum2 = a2 + b2;
			printf(", ");
			printf("%ld", sum1 + (sum2 / l));
			printf("%ld", sum2 % l);
			a1 = b1;
			b1 = sum1;
			a2 = b2;
			b2 = sum2;
		}
	}
	printf("\n");
	return (0);
}
