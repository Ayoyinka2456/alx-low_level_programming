#include "main.h"

/**
 * _isdigit - To look through for 0 -9
 * @c: The argument to examine
 * Return: 1 if 0-9 is found, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
