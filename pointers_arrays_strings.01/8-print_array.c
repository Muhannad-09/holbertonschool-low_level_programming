#include "main.h"
#include <stdio.h>

/*
 * File - 8-print_array.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
