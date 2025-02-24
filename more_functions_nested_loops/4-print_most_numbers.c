#include "main.h"

/*
 * File - 4-print_most_numbers.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * print_most_numbers - prints numbers without (2, 4) followed by new line
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
		_putchar(i + '0');
		}
	}
	_putchar('\n');
}
