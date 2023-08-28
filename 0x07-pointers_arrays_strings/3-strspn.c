#include "main.h"

/**
 * _strspn - function that takes elements
 * @s: element
 * @accept: element
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n += 1;
				break;
			}
		}
	}
	return (n);
}
