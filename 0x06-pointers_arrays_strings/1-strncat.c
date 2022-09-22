#include "main.h"

/**
 * _strncat - To concatenate two strings by n characters
 * @dest: String 1
 * @src: String 2
 * @n: The numbers of int to concat
 * Return: The pointer to the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len1 = strlen(dest);
	int len2 = strlen(src);

	for (i = 0; i < n; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
