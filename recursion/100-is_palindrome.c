#include "main.h"

/*
 * File: source_100-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _is_palindrome_helper - Helper function to check
 *if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int _is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome, 0 if not.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (_is_palindrome_helper(s, 0, len - 1));
}
