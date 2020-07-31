#include "holberton.h"
/**
 * set_bit - that returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
