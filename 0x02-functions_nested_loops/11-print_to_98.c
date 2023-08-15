#include <stdio.h>

/**
 *  print_to_98 - function that prints numbers up to 98.
 * @n: integer to be checked.
 *
 *
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d", i);
			printf(", ");
		}
	}
	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
			printf(", ");
		}
	}
	printf("98\n");
}
