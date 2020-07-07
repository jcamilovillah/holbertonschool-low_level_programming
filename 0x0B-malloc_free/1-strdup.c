#include "holberton.h"

/**
 * _strdup - returns a pointer.
 * @str: pointer char
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	p = malloc((i + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		p[j] = str[j];
	}
	p[j] = '\0';
	return (p);
}
