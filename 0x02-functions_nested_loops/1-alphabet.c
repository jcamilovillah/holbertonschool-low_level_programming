#include "holberton.h"

/**
 * print_alphabet - uses the print_alphabet func
 *
 *Return: nothing
 */

void print_alphabet(void)
{
	int i;

	for(i=97; i<=122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
