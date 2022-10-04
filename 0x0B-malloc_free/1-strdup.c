#include "main.h"

/**
 * _strdup - Function that duplicates a string
 * @str: The string to be duplicated
 * Return: NULL if str is empty, new_array if successful
 */

char *_strdup(char *str)
{
	char *copy_string;
	unsigned int i, j, size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		size++;

	copy_string = malloc(size * sizeof(str));

	if (copy_string == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		copy_string[j] = str[j];

	return (copy_string);
}
