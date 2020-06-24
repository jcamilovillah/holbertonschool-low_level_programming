#include "holberton.h"

/**
 **_strcpy - function that prints a copy of a string using pointers
 *@dest: the directions goal.
 *@src: brint the string to copy with pointers.
 *Return: xxx
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);

}
