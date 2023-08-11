#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char hxdc;
hxdc = '0';

while (hxdc <= '9')
{
putchar(hxdc);
hxdc++;
}

hxdc =  'a';

while (hxdc <= 'f')
{
putchar(hxdc);
hxdc++;
}
putchar('\n');
return (0);
}
