#include "main.h"

/**
 *print_alphabet_x10 - program entry point
 *
 * Return: 0 always successful
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		char j = 'z';



		while (c <= j)

		{

			_putchar(c);

			c++;

		}

		_putchar('\n');
		i++;
	}
}
