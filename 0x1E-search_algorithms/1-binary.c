#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: array give of the main
 * @size: size of the array
 * @value: value of the integer to search
 * Return: index o -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t left = 0;
	size_t right = size - 1;
	size_t x;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
		{
			printf("%d, ", array[x]);
		}
		printf("%d\n", array[x]);
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
			return (mid);
	}
	return (-1);
}
