#include <stdio.h>
#include <stdlib.h>

/*
 * File: source_3-file.c
 * Author: Muhannad Gsgs
 */

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
