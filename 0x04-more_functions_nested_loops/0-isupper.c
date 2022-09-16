#include "main.h"

/**
 * _isupper - chechs if a character is uppercase
 * @c: character to be checked
 * Return: 1 if uppercase, 0 if not uppercase
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
