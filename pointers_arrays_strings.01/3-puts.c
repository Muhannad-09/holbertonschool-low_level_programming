#include "main.h"
#include <unistd.h>

/*
 * File - 3-puts.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to the string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
