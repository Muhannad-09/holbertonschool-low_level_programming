#include "main.h"

/*
 * File - 101-print_number.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */


/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if	(n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
