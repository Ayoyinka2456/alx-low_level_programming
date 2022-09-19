#include "main.h"

/**
 * print_rev - To print the String in reverse
 * @s: The string to be reversed
 * Return: 0 always
 */

void print_rev(char *s)
{
int len = strlen(s);

while (len--)
{
	_putchar(*(s + len));
}
_putchar('\n');
}
