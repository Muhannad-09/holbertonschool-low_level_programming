#include "main.h"

/*
 * File: source_1-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to print.
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
