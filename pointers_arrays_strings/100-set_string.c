#include "main.h"

/*
 * File: source_100-file.c
 * Author: Muhannad Gsgs
 */

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to be set
 * @to: pointer to the char
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
