#include "main.h"

/**
 * _strlen - To get length of string
 *
 * @s: String to be examined
 *
 * Return: 0 always
 */

int _strlen(char *s)
{
	int x;

	x = strlen(s);
	return (x);
}


/**
 * puts_half - T print from midway till end of string
 * @str: String to be examined
 * Return: 0 always
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));

	putchar(10);
}
