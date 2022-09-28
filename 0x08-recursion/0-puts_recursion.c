#include "main.h"

/**
 * _puts_recursion - Function to perform
 * puts using recursion
 *
 * @s: The string to be printed
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	printf("%c", *s);
	*s++;
	_puts_recursion(s);
}
