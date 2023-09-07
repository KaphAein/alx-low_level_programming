#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory
 * @b: size of memory
 *
 * Return: NULL
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == 0)
		exit(98);

	return (a);
}
