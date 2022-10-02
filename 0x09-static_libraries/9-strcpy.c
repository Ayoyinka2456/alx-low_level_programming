#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)

{

	int c, i;

	c = 0;

	while (src[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
