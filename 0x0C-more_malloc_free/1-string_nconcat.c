#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second  string
 * @n: number of bytes to copy from s2
 * Return: pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;
	if (n >= size2)
		n = size2;

	a = malloc(sizeof(char) * (size1 + n + 1));
	if (a == 0)
		return (NULL);
	for (i = 0; i < size1; i++)
		a[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		a[i] = s2[j];

	a[i] = '\0';
	return (a);
}
