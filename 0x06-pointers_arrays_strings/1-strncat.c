#include "holberton.h"

/**
* _strncat - concatenates two strings
* @src: First string to append
* @dest: Second string to append
* @n: number of bytes
* Return: Pointer to the resulting string
**/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
