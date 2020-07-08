#include "holberton.h"

/**
 * free_grid - return a pointer to a 2 dimensional array of ints
 *
 * @grid: double pointers
 * @height: integer
 *
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
