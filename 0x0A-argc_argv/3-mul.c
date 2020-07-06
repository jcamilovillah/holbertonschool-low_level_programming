#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: int
 * @argv: char
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int val;
	int val2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	val = atoi(argv[1]);
	val2 = atoi(argv[2]);

	printf("%d\n", val * val2);

	return (0);
}
