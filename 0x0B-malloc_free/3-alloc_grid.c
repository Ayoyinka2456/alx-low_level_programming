#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success), NULL (Error)
 */


int **alloc_grid(int width, int height)
{
	int **md_array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	md_array = (int **) malloc(sizeof(int *) * height);

	if (md_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		md_array[i] = (int *) malloc(sizeof(int) * width);
		if (md_array[i] == NULL)
		{
			free(md_array);
			for (j = 0; j <= i; j++)
				free(md_array[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			md_array[i][j] = 0;
		}
	}
	return (md_array);
}
