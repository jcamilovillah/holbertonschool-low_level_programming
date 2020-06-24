#include "holberton.h"

/**
 *rev_string - function that prints a string in reverse
 *@s: pointer that refers a string.
 */

void rev_string(char *s)
{
	int temp, size, start;

	start = 0;

	for (size = 0; s[size] != '\0'; size++)
		;
	size--;
	while (start < size)
	{
		temp = s[start];
		s[start] = s[size];
		s[size] = temp;
		start++;
		size--;
	}
}
