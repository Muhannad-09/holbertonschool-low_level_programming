#include "main.h"

/*
 * File - 5-rev_string.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
