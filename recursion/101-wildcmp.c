#include "main.h"

/*
 * File: source_101-file.c
 * Author: Muhannad Gsgs
 */

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered
 * identical, otherwise return 0.
 * @s1: The first string.
 * @s2: The second string, which can contain the special character '*'.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s2 == '\0')
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0')
		return (*s2 == '\0');
	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
