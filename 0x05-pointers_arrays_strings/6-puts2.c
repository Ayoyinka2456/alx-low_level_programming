#include "main.h"

/**
 * puts2 - To print every other character in a string
 * @str: The string to be examined
 * Returns: 0 always
 */

void puts2(char *str)
{
int x = _strlen(str);
int i;

for (i = 0; i < x; i += 2)
	_putchar(*(str + i));
}
