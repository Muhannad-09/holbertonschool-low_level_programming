#include <stdio.h>

/*
 * File: 7-print_tebahpla.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * main - prints lower case of alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
