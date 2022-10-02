#include "main.h"

/**
 * _strcmp - To compare two strings
 * @s1: First string
 * @s2: Second string
 * Return: The ASCII difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
