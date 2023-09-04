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
	unsigned int i = 0, size1, size2;

	while (*s1 != '\0')
		i++;

	size1 = i++;
	while (*s2 != '\0')
		i++;

	size2 = i++;

	a = malloc(sizeof(char) * (size1 + size2));

	if (a == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];
	return (a);
}
