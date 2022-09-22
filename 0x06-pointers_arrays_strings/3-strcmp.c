#include "main.h"

/**
 * _strcmp - To compare two strings
 * @s1: First string
 * @s2: Second string
 * Return: The ASCII difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i, difference;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				difference = *s1 - *s2;
		}
		else
			difference = 0;
	}

	return (flag);
}
