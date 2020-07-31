#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n:pointer value.
 * Return: number n
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	binary_print(n);
}
/**
 * binary_print - prints the binary in reverse
 * @n: number
 */
void binary_print(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		binary_print(n >> 1);
	}
	_putchar((n & 1) + '0');
}
