#include "holberton.h"

/**
 *print_rev - function that prints a string in reverse
 *@s: pointer that refers a string.
 */

void print_rev(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;
	for (size = size - 1; size >= 0; size--)
		_putchar(s[size]);
	_putchar('\n');
}
