#include <stdio.h>

/**
 *print_array - function that prints elements of an array
 *@a: a pointer.
 *@n: an integer
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");

}
