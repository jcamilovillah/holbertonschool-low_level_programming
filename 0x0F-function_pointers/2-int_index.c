#include "function_pointers.h"

/**
 * int_index - function
 * @array: int
 * @size: int
 * @cmp: pointer
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, aux;

	aux = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			aux = cmp(array[i]);
			if (aux)
			{
				return (i);
			}
		}
	}
	return (-1);
}
