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
	int j = 0;
	int k = strlen(s);
	char d[98];

	while (s[i] != '\0')
	{
	if (s[i] == c)
	{
		while (i < k)
		{
			d[j] = s[i];
			i++;
			j++;
		}
		break;
	}

	i++;

	}
	return (d);
}
