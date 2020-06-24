#include "holberton.h"

/**
 *puts2 - fuction that prints every other character of a string.
 *@str: string that bring a serie of numbers.
 */

void puts2(char *str)
{
	int size;

	size = 0;

	while (str[size] != '\0')
	{
		if (size % 2 == 0)
		{
		_putchar(str[size]);
		}
		size++;
	}
	_putchar('\n');
}
