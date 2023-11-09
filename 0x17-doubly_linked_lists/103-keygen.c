#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * find_largest_char - main
 * @username: element
 * @length: element
 * Return: int
 */
int find_largest_char(char *username, int length)
{
	int max_char = *username, i;

	for (i = 0; i < length; i++)
	{
		if (max_char < username[i])
		{
			max_char = username[i];
		}
	}

	srand(max_char ^ 14);
	return (rand() & 63);
}
/**
 * multiply_chars - function
 * @username: element
 * @length: element
 * Return: int
 */
int multiply_chars(char *username, int length)
{
	int sum = 0, i;

	for (i = 0; i < length; i++)
	{
		sum += username[i] * username[i];
	}

	return (((unsigned int)sum ^ 239) & 63);
}
/**
 * generate_random_char - function
 * @username: element
 * Return: int
 */
int generate_random_char(char *username)
{
	int random_char = 0, i;

	for (i = 0; i < *username; i++)
	{
		random_char = rand();
	}

	return (((unsigned int)random_char ^ 229) & 63);
}
/**
 * main - function
 * @argc: number of args
 * @argv: str if args
 * Return: Always EXIT_SUCCESS.
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, max_char, i, product;

	long alph[] = {0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
				   0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
				   0x723161513346655a, 0x6b756f494b646850};

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}

	for (length = 0; argv[1][length]; length++)
		;

	keygen[0] = ((char *)alph)[(length ^ 59) & 63];

	keygen[1] = ((char *)alph)[(multiply_chars(argv[1], length) ^ 79) & 63];

	product = 1;
	for (i = 0; i < length; i++)
	{
		product *= argv[1][i];
	}
	keygen[2] = ((char *)alph)[(product ^ 85) & 63];

	keygen[3] = ((char *)alph)[find_largest_char(argv[1], length)];

	keygen[4] = ((char *)alph)[multiply_chars(argv[1], length)];

	keygen[5] = ((char *)alph)[generate_random_char(argv[1])];

	keygen[6] = '\0';

	printf("%s\n", keygen);

	return (0);
}
