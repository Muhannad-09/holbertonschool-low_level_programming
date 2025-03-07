#include "main.h"

/*
 * File: source_0-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to print.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
