#include "main.h"

/**
 * string_toupper - To convert lowercases to Uppercases
 * @s: String to be examined
 * Return: the resulting string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;

	return (s);
}
