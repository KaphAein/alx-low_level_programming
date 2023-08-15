#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alphabet;
alphabet = 'a';

while (alphabet <= 'z')
{
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);
alphabet++;
}
else
alphabet++;
}
putchar('\n');
return (0);
}
