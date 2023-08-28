#include "main.h"

/**
 * _strspn - function that takes elements
 * @s: element
 * @accept: element
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, n = 0;

	for (i; s[i] != '0'; i++)
	{
		for (j; accept[j] != '0'0; j++)
		{
			if (s[i] == accept[j])
				n += 1;
	}
	return (n);
}
