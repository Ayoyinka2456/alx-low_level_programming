#include "main.h"

/**
 * _strspn - function that gets the
 * length of a prefix substring
 *
 * @s: The string to be examined
 * @accept: The snippet to search
 *
 * Return: number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, f, x;

f = 0;

for (i = 0; s[i] != '\0'; i++)
{
	x = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{

	if (s[i] == accept[j])
	{
		f++;
		x = 1;
	}

	}
	if (x == 0)
	{
	return (f);
	}
}

return (0);
}
