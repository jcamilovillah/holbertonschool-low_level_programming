#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - sum to variables
 * @a: 1st int
 * @b: 2nd int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts a from b
 * @a: 1st int
 * @b: 2nd int
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplicates a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: 1st int
 * @b: 2nd int
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of a division
 * @a: 1st int
 * @b: 2nd int
 * Return: remaindes
 */
int op_mod(int a, int b)
{
	return (a % b);
}
