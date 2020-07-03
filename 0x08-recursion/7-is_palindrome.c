#include "holberton.h"
/**
* longi - count character.
* @s: thi is a pointer
* Return: void
*/

int longi(char *s)
{
	int size = 0;

	if (*s == '\0')
	{
		return (0);
	}

	return (size + 1 + longi(s + 1));
}
/**
 * is_palindrome - Function main(?..
 * @s: thi is a pointer
 * Return: void
 */

int is_palindrome(char *s)
{
	char result;
	int i;
	int der = 0;


	i = longi(s);

	if (i == 1)
	{
		return (1);
	}

	result = (comparacion(der, i - 1, s));
	return (result);
}

/**
* comparacion - Function.
* @s: pointer
* @der: derecho
* @rev: reverse
* Return: 0
*/

int comparacion(int der, int rev, char *s)
{
	if (s[der] == s[rev])
	{
		if (der > rev)
		{
			return (1);
		}
		return (comparacion(der + 1, rev - 1, s));
	}
	else
	{
		return (0);
	}
}
