#include "holberton.h"

/**
* reverse_array - reverse an array
* @a: array
* @n: elements of the array
**/

void reverse_array(int *a, int n)
{
	int i, value;

	n--;
	for (i = 0; i < n; i++, n--)
	{
		value = a[i];
		a[i] = a[n];
		a[n] = value;
	}
}
