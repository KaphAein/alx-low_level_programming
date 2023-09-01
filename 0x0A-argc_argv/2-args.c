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
	int i = 0;

	while (i < argc);
	printf("%s\n", argv[i]);
	i++;

	return (0);
}
