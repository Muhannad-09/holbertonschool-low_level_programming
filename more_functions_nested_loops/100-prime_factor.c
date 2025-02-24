#include <stdio.h>
#include <math.h>

/*
 * File - 100-prime_factor.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * main - finds and prints the largest prime factor of 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num = 612852475143;
	long max_prime = -1;
	long i;

	while (num % 2 == 0)
	{
		max_prime = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max_prime = i;
			num = num / i;
		}
	}

	if	(num > 2)
		max_prime = num;

	printf("%ld\n", max_prime);

	return (0);
}
