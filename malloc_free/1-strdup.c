#include "main.h"
#include <stdlib.h>

/*
 * File: source_1-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 *         or if str is NULL.
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i, length;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	copy = malloc((length + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];
	copy[length] = '\0';

	return (copy);
}
