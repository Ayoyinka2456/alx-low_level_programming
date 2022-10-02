#include "main.h"

/**
 * _puts - To output a string to stdout
 * @str: The string to be printed
 * Return: 0 as always
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
