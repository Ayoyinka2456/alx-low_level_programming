#include "main.h"

/**
 * _memcpy - copies n bytes from memory
 * area src to memory area dest
 *
 * @dest: The file to overwritten
 * @src: The file that contains bytes to be copied
 * @n: The amount of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	dest[i] = src[i];

return (dest);
}
