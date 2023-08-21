#include "main.h"
#include <stdio.h>
/**
* print_array - function that takes a pointer
* @a: pointer
* @n: integer
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(" ,");
	}
	printf("\n")
}
