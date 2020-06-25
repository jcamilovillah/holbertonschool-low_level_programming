#include "holberton.h"
/**
* _strcat - appends two strings
* @src: First string to append
* @dest: Second string to append
* Return: Pointer to the resulting string
**/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
