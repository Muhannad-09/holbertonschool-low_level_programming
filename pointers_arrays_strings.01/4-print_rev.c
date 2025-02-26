#include "main.h"

/*
 * File - 4-print_rev.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
