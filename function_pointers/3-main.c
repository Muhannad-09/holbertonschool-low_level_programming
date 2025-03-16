#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Performs simple operations
 * @argc: The number of arguments
 * @argv: The arguments array
 *
 * Return: 0 on success, other exit statuses on error
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);

	/* Ensure correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Check if the operator is valid */
	if (argv[2][1] != '\0')  /* If more than one character is passed */
	{
		printf("Error\n");
		exit(99);
	}

	/* Get the function for the operator */
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Check for division by zero */
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Perform the operation and print the result */
	printf("%d\n", op_func(num1, num2));
	return (0);
}
