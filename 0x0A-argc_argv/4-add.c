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

	while (i < argc - 1)
	{
		if (**argv > '9' || **argv < '0')
		{
			printf("Error\n");
			return (1);
		}
		else if (argc == 0)
			printf("0\n");
		else
		{
			sum += atoi(argv[i]);
		}
		i++;
	}
	printf("%i\n", sum);

	return (0);
}
