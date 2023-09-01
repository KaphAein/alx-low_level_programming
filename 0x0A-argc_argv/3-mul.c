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
	if (argc == 3)
		printf("%i\n", (int)(argv[1] * argv[2]));
	else if (argc < 3)
		printf("Error");

	return (0);
}
