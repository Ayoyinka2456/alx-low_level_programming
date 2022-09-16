#include "main.h"

/**
 * _isupper - chechs if a character is uppercase
 * @c: character to be checked
 * Return: 1 if uppercase, 0 if not uppercase
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
