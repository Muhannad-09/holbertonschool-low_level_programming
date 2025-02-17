#include "main.h"

/*
 * File - 5-sign.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * print_sign - checks if number is greater, less or equals to 0 and print sign
 * @n: is the character is being checked
 * Return: 1 if the number is greater than 0,
 * returns 0 if the number is equals to 0,
 * returns -1 if the number is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
