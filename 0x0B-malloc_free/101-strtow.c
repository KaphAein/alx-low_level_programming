#include "main.h"
#include <stdlib.h>
/**
 * **strtow - function
 * @str: element
 * Return: char
 */
char **strtow(char *str)
{
	int i, j, k, wc = 0, lc = 0, wl = 0;
	char **a;

	if (str == "" || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == " ")
			i++;
		if (str[i] != " " && (str[i + 1] == " " || str[i + 1] == '\0'))
			wc += 1;
		lc++;
	}
	if (wc == 0)
		return (NULL);
	a = malloc(sizeof(char) * (lc + wc + 1));
	if (a == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < lc; i++)
	{
		while (str[i] == " ")
			i++;
		wl = 0;
		while (str[i + wl] != " " && str[i + wl] != '\0')
			wl++;
		if (wl > 0)
		{
			a[j] = malloc(sizeof(char) * (wl + 1));
			if (a[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(a[k]);
				free(a);
				return (NULL);
			}
			k = 0;
			while (k < wl)
				a[j][k] =  str[i];
			a[j][k] = '\0';
			j++;
			i += wl;
		}
	}
	a[j] = '\0';
	return (a);
}
