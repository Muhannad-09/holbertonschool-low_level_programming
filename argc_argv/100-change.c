#include <stdio.h>
#include <stdlib.h>

/*
 * File: source_5-file.c
 * Author: Muhannad Gsgs
 */

/**
 * main - prints the minimum number of coins
 *to make change for an amount of money
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 (success), 1 (error)
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}

	printf("%d\n", coins);
	return (0);
}
