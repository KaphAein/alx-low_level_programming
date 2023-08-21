#include "main.h"

/**
* rev_string - function that takes a pointer
* @s: pointer
* Return: void
*/

void rev_string(char *s)
{
	int i, start, end;
	char temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	start = 0;
	end = --i;
	while (end > start)
	{
		temp = s[end];
		s[end] = s[start];
		s[start] = temp;

		start++;
		end--;
	}
}
