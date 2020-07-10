#include "holberton.h"

/**
* malloc_checked - allocates memory using malloc..
* @b: values
* Return: Always 0.
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
