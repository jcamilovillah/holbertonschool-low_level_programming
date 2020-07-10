#include "holberton.h"

/**
* array_range - creates an array of integers.
* @min: min
* @max: max
* Return: pointer.
*/

int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
	{
		p[j] = i;
	}
	return (p);
}
