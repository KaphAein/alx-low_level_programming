#include "main.h"
/**
 * _strcmp - function that takes pointers
 * @s1: element
 * @s2: element
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, cmp = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		cmp = *s1 - *s2;
	}

	return (cmp);
}