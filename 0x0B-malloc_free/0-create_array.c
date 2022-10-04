#include "main.h"

/**
 * create_array - To create an array of chars
 * with byte size given by malloc
 *
 * @size: The size of the array
 * @c: The char to be used to initialize array
 *
 * Return: NULL if failed,
 * Array pointer if successful
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	arr = malloc(size * sizeof(c));

	if (arr == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);

}
