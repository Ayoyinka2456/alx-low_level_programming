#include "main.h"

/**
 * str_concat - Function to concat two strings
 * @s1: First string
 * @s2: Second string
 * Return: Ponter to the new string of teh concat
 */


char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 != NULL && s1[len1] != '\0')
		len1++;
	while (s2 != NULL && s2[len2] != '\0')
		len2++;

	s3 = malloc((len1 + len2 + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}

	while (i < (len1 + len2))
	{
		s3[i] = s2[j];
		i++;
		j++;
	}

	s3[i] = '\0';

	return (s3);
}
