#include "main.h"

/**
* reverse_array - function that takes int
* @a: element
* @n: element
* Return: void
*/

void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;
	while (end > start)
	{
		temp = a[end];
		a[end] = a[start];
		a[start] = temp;

		start++;
		end--;
	}
}
