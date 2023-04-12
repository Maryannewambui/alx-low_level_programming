#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns pointer to a 2 dimensional array of int
 * @width: input
 * @height: input
 * Return: NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int a, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		mee[a] = malloc(sizeof(int) * width);

		if (mee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(mee[a]);

			free(mee);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (m = 0; m < width; m++)
			mee[a][m] = 0;
	}

	return (mee);
}
