#include "main.h"

/**
* _atoi - function that takes a pointer
* @s: pointer
* Return: int
*/

int _atoi(char *s)
{
	unsigned int i = 0, j, pn = 1, finopt = 0, deci = 1, k = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			pn *= -1;
		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			if (k > 0)
				deci *= 10;
			k++;
		}
		if ((*(s + i) < '0' || *(s + i) > '9') && k > 0)
			break;
		i++;
	}

	for (j = i - k; j < i; j++)
	{
		finopt += ((*(s + j) - '0') * deci);
		deci /= 10;
	}
	return (finopt * pn);
}
