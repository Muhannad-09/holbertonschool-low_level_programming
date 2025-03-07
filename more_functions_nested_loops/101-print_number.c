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
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if	(num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
