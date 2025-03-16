#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a comparison function.
 * @array: the array of integers.
 * @size: the number of elements in the array.
 * @cmp: a function pointer used to compare values.
 *
 * Return: the index of the first element that matches the comparison function,
 *         or -1 if no match is found or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
