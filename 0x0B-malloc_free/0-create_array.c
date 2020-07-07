#include "holberton.h"

/**
 * create_array - creates an array of chars.
 * @size: int
 * @c: char
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
