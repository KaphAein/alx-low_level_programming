#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coin - function
 * @i: element
 * Return: int
 */
int coin(int i)
{
	int j = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i -= 2;
		else if (i % 25 == 0)
			i -= 25;
		else if (i % 10 == 0)
			i -= 10;
		else if (i % 5 == 0)
			i -= 5;
		else if (i % 2 == 0)
		{
			if (i % 10 == 6)
				i -= 1;
			else
				i -= 2;
		}
		else
			i -= 1;

		j++;
	}

	return (j);
}

/**
 * main - entry point
 * @argc: element
 * @argv: element
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	int i, j;

	j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
		printf("0\n");
	else
	{
		j = coin(i);

		printf("%d\n", j);
	}

	return (0);
}
