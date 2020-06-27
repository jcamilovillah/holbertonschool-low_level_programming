#include "holberton.h"

/**
* rot13 - function that encodes a string using rot13
* @a: string
* Return: string changed
**/

char *rot13(char *a)
{
	int i, j;
	char rot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char tor[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (rot[j] == a[i])
			{
				a[i] = tor[j];
				break;
			}
		}
	}
	return (a);
}
