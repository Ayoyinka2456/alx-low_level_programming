#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: String to be examined
 * @c: Character to search for
 *
 * Return: pointer to the first occurrence of
 * the character c in the string s, or NULL
 * if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (1)
	{
		i  = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
