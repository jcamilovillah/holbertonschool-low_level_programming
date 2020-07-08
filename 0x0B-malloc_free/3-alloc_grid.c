#include "holberton.h"

/**
 * alloc_grid - return a pointer to a 2 dimensional array of ints
 *
 * @width: widht of the array
 * @height: height of the array
 *
 * Return: return a pointer to 2d array or NULL if is cero, less or fail
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));
	if (p != '\0')
	{
		for (h = 0; h < height; h++)
		{
			p[h] = malloc(width * sizeof(int));
			if (p[h] == '\0')
			{
				for (; h >= 0; h--)
					free(p[h]);
				free(p);
				return ('\0');
			}
		}
		for (h = 0; h < height; h++)
		{
			for (w = 0; w < width; w++)
			{
				p[h][w] = 0;
			}
		}
		return (p);
	}
	return ('\0');
}
