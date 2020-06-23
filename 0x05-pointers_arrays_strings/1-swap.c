#include "holberton.h"

/**
 *swap_int - this function swap the values of two variables
 *@a: argument used as a punter.
 *@b: argument used as a punter.
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
