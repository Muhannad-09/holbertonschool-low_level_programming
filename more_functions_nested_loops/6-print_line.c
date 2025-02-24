#include "main.h"

/*
 * File - 6-print_line.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */


/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
