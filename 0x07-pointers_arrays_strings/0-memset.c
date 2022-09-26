#include "main.h"

/**
 * _memset - Function to fill first n bytes
 * of memory area with constant b
 *
 * @s: The address of memory to print
 * @b: The constant
 * @n: The size of memory to print
 *
 * Return: pointer to memory area, s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}

return (s);
}
