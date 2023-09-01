#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: element
 * @argv: element
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int sum = 0, coins = 0;
	char c[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}
	sum = atoi(argv[1]);
	while (sum >= 25)
	{
		sum -= 25;
		coins++;
	}
	while (sum >= 10)
	{
		sum -= 10;
		coins++;
	}
	while (sum >= 5)
	{
		sum -= 5;
		coins++;
	}
	while (sum >= 2)
	{
		sum -= 2;
		coins++;
	}
	if (sum == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
