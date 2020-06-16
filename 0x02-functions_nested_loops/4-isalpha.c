#include "holberton.h"
/**
 * _isalpha - This function checks for an alphabetic character
 * Return: 1 if c is a letter or 0 if not
 * @c: Contains the value
 **/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
