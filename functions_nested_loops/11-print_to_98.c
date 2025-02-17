#include <stdio.h>

/*
 * File - 11-print_to_98.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * print_to_98 - prints all natural numbers from given number
 * to 98 sperated by comma
 * @n: the number start counting with
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
