#include "main.h"

/**
 * _strspn - function that takes elements
 * @s: element
 * @accept: element
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n += 1;
				break;
			}
		}
	}
	return (n);
}
