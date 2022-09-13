#include "main.h"

/**
 * print_alphabet - program entry point
 *
 * Return: 0 always successful
 *
 */

void print_alphabet(void)

{

	char c = 'a';

	char j = 'z';



	while (c <= j)

	{

		_putchar(c);

		c++;

	}

	_putchar('\n');

}
