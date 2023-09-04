#include "main.h"
#include <stdlib.h>

/**
 * *str_concat
 * @s1: element
 * @s2: element
 * Return: char or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i = 0, size;

	while (*str != '\0')
		i++;

	size = i++;

	a = malloc(sizeof(char) * size);

	if (a == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];
	return (a);
}
