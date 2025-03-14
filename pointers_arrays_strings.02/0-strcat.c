#include "main.h"

/*
 * File: source_file.c
 * Author: Muhannad Gsgs
 */

/**
 * _strcat - Appends the source string to the destination string.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
