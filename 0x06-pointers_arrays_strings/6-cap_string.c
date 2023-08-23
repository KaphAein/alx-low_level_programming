#include "main.h"
/**
 * cap_string - function that takes elements
 * @s: first string.
 * Return: char
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (i == 0 || s[(i - 1)] == sep[j])
			{
				if (s[i] >= 97 && s[i] <= 122)
					s[i] -= 32;

				else
					continue;
			}
		}
	}
	return (s);
}
