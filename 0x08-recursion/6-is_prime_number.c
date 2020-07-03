#include "holberton.h"

/**
* is_prime_number - function..
* @n: number
* Return: Always 0.
*/

int is_prime_number(int n)
{
	int resultado = 0;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	resultado = primo(n, 2);
	return (resultado);
}
/**
* primo - operation function.
* @n: number
* @i: iterator
* Return: Always 0.
*/

int primo(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i < n / 2)
	{
		return (primo(n, i + 1));
	}

	return (1);
}
