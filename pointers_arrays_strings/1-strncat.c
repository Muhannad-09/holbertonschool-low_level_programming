#include "main.h"

/*
 * File: source_1-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _strncat - Appends at most n bytes of the source string to the destination
 *            string. This function takes two strings, `dest` and `src`, and
 *            appends `src` to `dest`, overwriting the terminating null byte
 *            of `dest`. The resulting string is null-terminated.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to append from src.
 *
 * Return: A pointer to the resulting string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
