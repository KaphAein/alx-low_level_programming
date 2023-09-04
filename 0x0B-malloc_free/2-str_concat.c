#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function
 * @s1: element
 * @s2: element
 * Return: char or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i = 0, j = 0, size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	size1 = i + 1;

	while (s2[j] != '\0')
		j++;
	size2 = i + 1;

	a = malloc(sizeof(char) * (size1 + size2 - 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];
	for (j = 0; s2[i] != '\0'; i++)
		a[j + i] = s2[j];
	a[i + j] = '\0';

	return (a);
}
