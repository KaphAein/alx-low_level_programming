#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @size: size of each nmemb
 * @nmemb: number of elements
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);
	if (a == 0)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		a[i] = 0;

	return (a);
}
