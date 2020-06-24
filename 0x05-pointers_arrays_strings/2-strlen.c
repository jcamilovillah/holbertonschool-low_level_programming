#include "holberton.h"

/**
 *_strlen - count the number of elements of a string.
 *@s: a punter that reference a string.
 *Return: counter: the number of the characters of the string.
 */

int _strlen(char *s)
{
	int size;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}
