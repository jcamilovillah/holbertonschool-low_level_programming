#include "holberton.h"

/**
* string_nconcat - concatenates two strings.
* @s1: 1st string
* @s2: 2nd string
* @n: limit
* Return: Always 0.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int x, z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (x = 0; s1[x] != '\0'; x++)
	{

	}
	for (z = 0; s2[z] != '\0'; z++)
	{

	}
	if (n >= z)
	{
		n = z;
	}
	t = malloc((x + n + 1) * sizeof(char));

	if (t == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
	{
		t[x] = s1[x];
	}
	for (z = 0; z < n; z++, x++)
	{
		t[x] = s2[z];
	}
	t[x] = '\0';
	return (t);
}
