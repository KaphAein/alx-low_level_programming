#include "function_pointers.h"
#include "3-calc.h"
#include <string.h>

/**
 * main - Entry point
 * @argc: element
 * @argv: element
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;

	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(operator, "+") != 0 &&
		strcmp(operator, "-") != 0 &&
		strcmp(operator, "*") != 0 &&
		strcmp(operator, "/") != 0 &&
		strcmp(operator, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(operator, "/") || strcmp(operator, "%")) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(operator))(num1, num2);
	printf("%d\n", result);

	return (0);
}
