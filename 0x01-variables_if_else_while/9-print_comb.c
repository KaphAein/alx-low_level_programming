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

while (intgrs <= 57)
{
putchar(intgrs);

if (intgrs != 57)
{
putchar(44);
putchar(32);
intgrs++;
}

else
{
intgrs++;
}
 
}

putchar('\n')
return (0);
}
