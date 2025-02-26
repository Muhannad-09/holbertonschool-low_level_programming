#include "main.h"

/*
 * File - 1-swap.c
 * Created by: Muhannad Gsgs 10722@holbertonstudents.com
 */

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
