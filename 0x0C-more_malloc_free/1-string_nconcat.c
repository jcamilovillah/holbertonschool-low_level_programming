#include "holberton.h"

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: limit
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n > j)
		n = j;

	p = malloc((i + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}
