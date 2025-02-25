#include "main.h"

/*
 * File - 6-puts2.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
