#include "main.h"
#include <stddef.h>

/*
 * File: source_7-file.c
 * Author: Muhannad Gsgs
 */


/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the chessboard array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
