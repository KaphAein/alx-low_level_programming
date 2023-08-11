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
while (i <=  55)
{
j = i + 1;
while (j <= 56)
{
k = j + 1;
while (k <= 57)
{
putchar(i);
putchar(j);
putchar(k);
if (k != 57 || j != 56  || i != 55)
{
putchar(44);
putchar(32);
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
