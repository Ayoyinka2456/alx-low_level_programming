#include "main.h"

/**
 * _strlen - To get length of string
 * @s: String to be examined
 * Return: 0 always
 */


int _strlen(char *s)
{
int x;

x = strlen(s);
return (x);
}


/**
 * puts2 - To print very other character
 * @str: String
 * Returns: 0 always
 */

void puts2(char *str)
{
int x = _strlen(str);
int i;

for (i = 0; i < x; i += 2)
	_putchar(*(str + i));
}
