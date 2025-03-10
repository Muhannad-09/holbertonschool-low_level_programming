#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * File: source_101-file.c
 * Author: Muhannad Gsgs
 */

/**
 * _isdigit - Checks if a string is composed of only digits.
 * @s: The string to check.
 *
 * Return: 1 if the string is all digits, 0 otherwise.
 */

int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * _strlen - Calculates the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * multiply - Multiplies two strings of numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: Pointer to the result as a string, or NULL on failure.
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2);
	int len = len1 + len2;
	int i, j, carry, digit1, digit2;
	int *result = calloc(len, sizeof(int));
	char *output;

	if (result == NULL)
	return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = num2[j] - '0';
			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}
	output = malloc(len + 1);
	if (output == NULL)
	{
		free(result);
		return (NULL);
	}

	i = 0, j = 0;
	while (i < len)
	{
		if (result[i] != 0 || j > 0)
			output[j++] = result[i] + '0';
		i++;
	}
	output[j] = '\0';

	free(result);
	return (j > 0 ? output : "0");
}

/**
 * errors - Prints an error message and exits with status 98.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The argument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3)
		errors();

	num1 = argv[1];
	num2 = argv[2];

	if (!_isdigit(num1) || !_isdigit(num2))
		errors();

	result = multiply(num1, num2);
	if (result == NULL)
		errors();

	printf("%s\n", result);
	free(result);

	return (0);
}
