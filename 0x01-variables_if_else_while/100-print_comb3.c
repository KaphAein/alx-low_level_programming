#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int j;
i = j = 48;
while (i <  57)
{
putchar(i);
while (j <= 57)
{
j++;
putchar(j);
}
i++;
j = i;
}
putchar('\n');
return (0);
}
