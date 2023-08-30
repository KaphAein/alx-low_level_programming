#include "main.h"

/**
 * str_length - function
 * @s: element
 * Return: int
 */

int str_length(*s)
{
	if (*s == '\0')
		return 0;
	return (1 + str_length(s + 1)
}

/**
* pal - function
* @str: element
* @start: element
* @end: element
* Return: int
*/

int pal(char *str, int start, int end)
{
	if (str[start] != str[end])
		return (0);
	else if (start >= end)
		return (1);
	return (pal(*str, start++, end--);
 }

/**
 * is_palindrome - function
 * @s: element
 * Return: int
 */

int is_palindrome(char *s)
{
	int l;

	l = str_length(*s);
	return (pal(*s, 0, (l - 1));
}
