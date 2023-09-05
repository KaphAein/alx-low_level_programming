#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function
 * @ac: element
 * @av: element
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int i, j, arglen, totlen = 0;
	char *a;

	argc = ac;
	**argv = **av;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		aglen = 0;
		while (av[i][arglen] != '\0')
			arglen++;
		totlen += agrlen + 1;
	}

	a = malloc(sizeof(char) * totlen);
	if (a == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		arglen = 0;
	while (av[i][arglen] != '\0')
		a[j++] = av[i][arglen++];
	a[j++] = '\n';
	}
	a[totlen]  = '\n';
	return (a);
}
