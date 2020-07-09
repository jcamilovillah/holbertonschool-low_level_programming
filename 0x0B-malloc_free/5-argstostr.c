#include "holberton.h"

/**
 * argstostr -  concatenates all the arguments
 * @ac: arguments
 * @av: double pointer
 * Return:  pointer
 */
char *argstostr(int ac, char **av)
{
	int av1 = 0, av2 = 0, size = 0, acc = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (av2 = 0; av2 < ac; av2++)
	{
		for (av1 = 0; av[av2][av1] != '\0'; av1++)
		{
			size++;
		}
		size++;
	}
	size++;
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (av2 = 0; av2 < ac; av2++)
	{
		for (av1 = 0; av[av2][av1] != '\0'; av1++)
		{
			p[acc] = av[av2][av1];
			acc++;
		}
		p[acc] = '\n';
		acc++;
	}
	p[acc] = '\0';
	return (p);
}
