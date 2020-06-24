#include "holberton.h"

/**
 *print_rev - function that prints a string in reverse
 *@s: pointer that refers a string.
 */

void print_rev(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	size--;
	while (size >= 0)
	{
		_putchar(s[size]);
		size--;
	}
	_putchar('\n');
}
