#include "main.h"
#include <stddef.h>

/*
 * File: source_5-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _strstr - locates a substring
 * @haystack: the string to search within
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
	char *h = haystack;
	char *n = needle;

	while (*n && *h == *n)
	{
		h++;
		n++;
	}
	if (!*n)
		return (haystack);
	haystack++;
	}
	return (NULL);
}
