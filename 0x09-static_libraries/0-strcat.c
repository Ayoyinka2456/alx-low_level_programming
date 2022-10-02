#include "main.h"

/**
 * _strcat - To concatenate two strings
 * @dest: The first string that will be appended to
 * @src: The second string to be appended to the dest
 * Return: Always 0;
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len1 = strlen(dest);
	int len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
