#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(argc, argv[])
{
	int num1, num2, result;
	char *operator = "+-*/%";

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	if (argv[2] != operator)
	{
		printf("Error");
		exit(99);
	}
	if ((argv[2] == '/' || argv[2] == '%') && argv[3] == 0)
	{
		printf("Error");
		exit(100);
	}

	num1 = int atoi(const char argv[1]);
	num2 = int atoi(const char argv[3]);

	result = (*get_op_func(operator))(num1, num2)
   	printf("%d\n", result);

    return (0);
}
