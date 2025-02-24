#include "main.h"

/*
 * File - 0-isupper.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * _isupper - checks if the character is uppercase or not
 * @c: the character being checked
 * Return: 1 if the character is uppercase, otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
