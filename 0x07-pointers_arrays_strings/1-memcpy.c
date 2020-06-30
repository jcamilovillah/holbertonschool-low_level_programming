#include "holberton.h"

/**
 * _memcpy - Name function
 * @dest: pointer memory area
 * @src: pointer memory area
 * @n: bytes
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
