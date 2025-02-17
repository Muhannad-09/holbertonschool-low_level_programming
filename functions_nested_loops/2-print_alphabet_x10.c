#include "main.h"

/*
 * File - 2-print_alphabet_x10.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * print_alphabet_x10 - prints alphabets in lowercase ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
