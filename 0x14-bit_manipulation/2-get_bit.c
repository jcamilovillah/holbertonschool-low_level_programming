#include "holberton.h"
/**
 * get_bit - that returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: the converted number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		n >>= index;
		return (n & 1);
	}
	return (-1);
}
