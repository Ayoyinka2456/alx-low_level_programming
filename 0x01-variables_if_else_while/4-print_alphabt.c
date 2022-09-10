#include <stdio.h>

/**
 * main - shows alphabets in lowercase
 *
 * print alphabets in lowercase
 *
 * Return: 0 normally
 */

int main(void)

{

	int z = 97;

	while (z < 123)

	{

		if (z != 101 && z != 113)

		{

			putchar(z);

		}

		z++;

	}

	putchar (10);

	return (0);

}
