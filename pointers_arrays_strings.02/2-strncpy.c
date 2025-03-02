#include "main.h"

/*
 * File: source_2-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _strncpy - Copies at most n bytes of the source string to the destination
 *            string. This function takes two strings, `dest` and `src`, and
 *            copies up to `n` bytes from `src` to `dest`. If `src` is less
 *            than `n` bytes long, the remainder of `dest` will be padded with
 *            null bytes. The resulting string is not null-terminated if `n`
 *            is reached.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
