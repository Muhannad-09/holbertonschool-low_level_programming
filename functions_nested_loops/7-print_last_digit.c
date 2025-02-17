#include "main.h"

/*
 * File - 7-print_last_digit.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * print_last_digit - prints the last digit of a given number
 * @n: is the character is being checked
 * Return: 0 Always
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
