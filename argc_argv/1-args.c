#include <stdio.h>

/*
 * File: source_1-file.c
 * Author: Muhannad Gsgs
 */

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
