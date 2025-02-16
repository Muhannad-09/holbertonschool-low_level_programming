#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 0-positive_or_negative.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * main - prints what ever number is positive of negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
