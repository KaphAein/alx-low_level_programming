#include "main.h"
#include <stdlib.h>

/**
 * *strdup - function
 * @str: element
 * Return: char or NULL
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i = 0, size;

	while (*str != '\0')
		i++;

	size = i - 1;
	a = malloc(sizeof(str) * size);
	if (a == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
