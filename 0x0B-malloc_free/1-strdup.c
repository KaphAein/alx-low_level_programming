#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function
 * @str: element
 * Return: char or NULL
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i = 0, size;

	while (*str != '\0')
		i++;

	size = i++;

	a = malloc(sizeof(char) * size);

	if (a == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = str[i];
	return (a);
}
