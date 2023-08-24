#include "main.h"
/**
 * leet - function that takes elements
 * @s: first string.
 * Return: char
 */

char *leet(char *s)
{
	int i, j;
	char leet[] = "43071";
	char aeotl[] = "aeotl";
	char AEOTL[] = "AEOTL";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[(i)] == aeotl[j] || s[(i)] == AEOTL[j])
				s[i] = leet[j];

			else
				continue;
		}
	}
	return (s);
}
