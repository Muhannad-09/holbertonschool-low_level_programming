#include "main.h"

/*
 * File - 1-isdigit.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * _isdigit - checks if the character is a number
 * @c: the character being checked
 * Return: 1 if the character is number, otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
