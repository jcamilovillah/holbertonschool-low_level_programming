#include "holberton.h"

/**
 *_puts - fuction that print a string.
 *@str: punter that reference a string.
 */

void _puts(char *str)
{
	int size;

	size = 0;

	while (str[size] != '\0')
	{
		_putchar(str[size]);
		size++;
	}
	_putchar('\n');
}
