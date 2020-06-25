#include "holberton.h"

/**
* _strncpy - copy a string
* @src: First string to append
* @dest: Second string to append
* @n: number of bytes
* Return: Pointer to the resulting string
**/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[j] = src[j];
		}
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
