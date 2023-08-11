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
while (j < 57)
{
j++;
putchar(i);
putchar(j);
if (i != 56)
{
putchar(44);
putchar(32);
i++
}
else
{
i++
}
}
j = i;
}
putchar('\n');
return (0);
}
