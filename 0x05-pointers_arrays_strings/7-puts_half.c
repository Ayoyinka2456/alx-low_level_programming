#include "main.h"

/**
 * puts_half - T print from midway till end of string
 * @str: String to be examined
 * Return: 0 always
 */

void puts_half(char *str)
{
int x = strlen(str);
int i;

if (x % 2 == 0)
{
	for (i = (x / 2); i <= x; i++)
		_putchar(*(str + i));
}
else
{
	int n = ((x - 1) / 2);

	for (i = n; i <= x; i++)
		_putchar(*(str + i));

}
_putchar('\n');
}
