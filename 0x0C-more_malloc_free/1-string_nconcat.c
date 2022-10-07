#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second String
 * @n: Number of chars to copy from @s2
 * Return: Pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	if (n > len_s2)
	{
		n = len_s2;
	}

	s3 = malloc((len_s1 + n + 1) * sizeof(char));

	if (s3 == NULL)
		return (0);

	for (i = 0; i < len_s1; i++)
		s3[i] = s1[i];
	for (; i < (len_s1 + n); i++)
		s3[i] = s2[i - len_s1];

	s3[i] = '\0';

	return (s3);
}
