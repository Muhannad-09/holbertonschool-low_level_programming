#include <stdio.h>

/*
 * File: source_2-file.c
 * Author: Muhannad Gsgs
 */

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
