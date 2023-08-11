#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int intgrs;
intgrs = 48;

if (intgrs < 57)
{
putchar(intgrs);
putchar(44);
putchar(32);
intgrs++;
}
else if (intgrs == 57)
{
putchar(intgrs);
}
return (0);
}
