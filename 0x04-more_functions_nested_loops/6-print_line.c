#include "holberton.h"
/**
 * print_line -  function that draws a straight line in the terminal.
 * @n: integer
*/
void print_line(int n)
{
	int line;

	for (line = n; line > 0; line--)
	{
		_putchar(95);
	}
	_putchar('\n');

}
