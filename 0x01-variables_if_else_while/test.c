#include <stdio.h>

/**
 * main - print alphabets
 *
 * Return: 0 idf properly executed
 */

int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	};
	putchar(10);

	return (0);
};
