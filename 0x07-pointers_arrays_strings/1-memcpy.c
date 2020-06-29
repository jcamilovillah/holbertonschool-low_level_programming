#include "holberton.h"

/**
 * _memcpy - name function
 * @dest: pointer memory area
 * @src: pointer memory area
 * @n: bytes
 * Return : pointer dest
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
