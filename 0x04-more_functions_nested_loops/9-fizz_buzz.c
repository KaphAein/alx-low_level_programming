#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i >= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz");
		else if ((i % 3 != 0) && (i % 5 == 0))
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FIzzBuzz");
		else
			printf("%d ", i);
		printf(" ");
	}
	return (0);
}
