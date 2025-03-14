#include "main.h"

/*
 * File: source_6-file.c
 * Author: Muhannad Gsgs
 */

/**
 * is_prime_helper - Helper function to check if a number is prime.
 * @n: The number to check.
 * @i: The current divisor to check.
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((i * i) > n)
		return (1);
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the input
 *integer is a prime number, otherwise returns 0.
 * @n: The number to check.
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
