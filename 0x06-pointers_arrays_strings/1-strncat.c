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

	while (i < n && src[i] != '\0')
	{
		dest[len1 + i] = src[i];
		i++;
	}

	/* To get the new length of the appended dest array */
	int len3 = strlen(dest);

	dest[len3] = '\0';

	return (dest);
}
