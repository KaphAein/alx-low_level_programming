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
	int i, j, size1 = 0, size2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	size1 += 2;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;
	size2 += 2;
	if (n >= size2)
		n = size2;
	if (*s1 == NULL)
		*s1 = "";
	if (*s2 == NULL)
		*s2 = "";

	a = malloc(sizeof(char) * (size1 + n));
	if (a == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];
	for (j = 0; j < n - 1; j++, i++)
		a[i] = s2[j];
	if (n < size2)
		a[i] = '\0'
	return (a);
}
