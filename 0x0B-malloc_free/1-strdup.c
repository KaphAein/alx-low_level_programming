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

	while (str[i] != '\0')
		i++;

	size = i + 1;

	a = malloc(sizeof(char) * size);

	if (a == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];
	a[i] = '\0';
	return (a);
}
