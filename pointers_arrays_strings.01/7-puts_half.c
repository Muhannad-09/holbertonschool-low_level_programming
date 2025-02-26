#include "main.h"

/*
 * File - 7-puts_half.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * puts_half - prints half of a string followed by a new line
 * @str: pointer to the string
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2 + 1;
	}

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
