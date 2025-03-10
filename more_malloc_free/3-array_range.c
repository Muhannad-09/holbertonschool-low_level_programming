#include "main.h"
#include <stdlib.h>

/*
 * File: source_3-file.c
 * Author: Muhannad Gsgs
 */

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: Pointer to the newly created array.
 *         NULL if min > max or if malloc fails.
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1; /* Calculate the size of the array */

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i; /* Fill the array with values from min to max */

	return (array);
}
