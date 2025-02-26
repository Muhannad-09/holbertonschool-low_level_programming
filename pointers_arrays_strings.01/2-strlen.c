#include "main.h"

/*
 * File - 2-strlen.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
