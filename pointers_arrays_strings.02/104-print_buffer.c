#include "main.h"
#include <stdio.h>

/*
 * File: source_12-file.c
 * Author: Muhannad Gsgs
 */

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer.
 * @size: The size of the buffer.
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if (j % 2 != 0)
				printf(" ");
		}

		for (j = 0; j < 10 && (i + j) < size; j++)
		{
			char c = b[i + j];

			if (c >= 32 && c <= 126)
				printf("%c", c);
			else
				printf(".");
		}

			printf("\n");
	}
}
