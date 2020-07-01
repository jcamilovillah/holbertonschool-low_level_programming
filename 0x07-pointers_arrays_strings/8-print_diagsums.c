#include "holberton.h"

/**
 * print_diagsums - Entry point
 * Desc: Entry
 *@a: pointer
 *@size: value
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)

{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		sum1 += a[i];
	}
	for (j = size - 1; j < (size * size) - 1; j += size - 1)
	{
		sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
