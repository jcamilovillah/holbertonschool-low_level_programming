#include "function_pointers.h"
/**
 * print_name - prints a name
 *
 * @name: pointer to a name
 * @f: a pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
