#include "main.h"

/**
 * infinite_add - function that adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, num1, num2, sum, carry = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (size_r <= i || size_r <= j)
		return (0);
	i--;
	j--;
	k = size_r - 2;
	while (i >= 0 || j >= 0 || carry > 0)
	{
		if (i >= 0)
			num1 = n1[i] - '0';
		else
			num1 = 0;
		if (j >= 0)
			num2 = n2[j] - '0';
		else
			num2 = 0;
		sum = num1 + num2 + carry;
		r[k] = (sum % 10) + '0';
		carry = sum / 10;
		i--;
		j--;
		k--;
	}
	if (k < 0)
		return (0);
	r[(size_r - 1)] = '\0';
	return (r);
}
