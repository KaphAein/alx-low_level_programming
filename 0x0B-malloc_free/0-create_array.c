#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function
 * @size: element
 * @c: element
 * Return: char or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	if (a == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a = malloc(sizeof(char) * size);
		a[i] = c;
		return (a);
	}
}
