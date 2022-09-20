#include "main.h"

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
