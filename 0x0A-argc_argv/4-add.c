#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: element
 * @argv: element
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	if (**argv > '9' || **argv < '0')
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 1)
		printf("0\n");

	else if (argc > 1)
	{
		while (i < argc - 1)
		{
			sum += atoi(argv[i]);
			i++;
		}
	}
	printf("%i\n", sum);

	return (0);
}
