#include "holberton.h"

/**
 *puts_half - fuction that prints every other character of a string.
 *@str: string that bring a serie of numbers.
 */

void puts_half(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;
	size++;
	for (size /= 2; str[size] != '\0'; size++)
	{
		_putchar(str[size]);
	}
	_putchar('\n');
}
