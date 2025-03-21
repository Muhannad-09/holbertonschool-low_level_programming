#include "main.h"
#include <stddef.h>

/*
 * File: source_2-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		return (s);
		s++;
	}
	if (*s == c)
	return (s);
	return (NULL);
}
