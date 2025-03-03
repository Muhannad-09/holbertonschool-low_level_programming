#include "main.h"

/*
 * File: source_4-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The value of x raised to the power of y.
 *         If y is lower than 0, return -1 to indicate an error.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
