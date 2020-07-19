#include "variadic_functions.h"

/**
 * print_strings - print strings, followed by a new line.
 * @n: arguments
 * @separator: comma and space
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *varg;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		varg = va_arg(valist, char *);
		if (varg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", varg);
		}
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(valist);
	printf("\n");
}
