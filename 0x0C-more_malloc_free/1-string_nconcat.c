#include "holberton.h"

/**
* string_nconcat - check the code for Holberton School students.
* @s1: primer string
* @s2: segundo strign
* @n: hasta n caracteres
* Return: Always 0.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	if (n >= j)
	{
		n = j;
	}
	t = malloc((i + n + 1) * sizeof(char));

	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		t[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		t[i] = s2[j];
	}
	t[i] = '\0';
	return (t);
}
