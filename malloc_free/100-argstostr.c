#include "main.h"
#include <stdlib.h>

/*
 * File: source_5-file.c
 * Author: Muhannad Gsgs
 */

/**
 * argstostr - Concatenates all arguments of the program into a single string.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

    /* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

    /* Concatenate the arguments into the string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
