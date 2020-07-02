#include "holberton.h"

/**
* _sqrt_recursion - function.
* @n: variable
* Return: Always 0.
*/

int _sqrt_recursion(int n)
{
	int i = 1;
	int resultado = 0;

	resultado = raiz(n, i);
	return (resultado);
}
/**
* raiz - Function calculate.
* @n: la raiz que entra
* @i: iterator
* Return: Always 0.
*/

int raiz(int n, int i)
{
	if (n / i == i && n % i == 0)
	{
		return (i);
	}
	if (n / i < i)
	{
		return (-1);
	}
	i = raiz(n, x + 1);
	return (i);
}
