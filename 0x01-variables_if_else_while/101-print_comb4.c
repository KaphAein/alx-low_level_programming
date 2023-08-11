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
int k;
i = j = k = 48;
while (i <  57)
{
while (j < 57)
{
j = i + 1;
while (k < 57)
{
k = j + 1;
putchar(i);
putchar(j);
putchar(k);
if (k != 57)
{
putchar(44);
putchar(32);
}
}
}
i++;
}
putchar('\n');
return (0);
}
