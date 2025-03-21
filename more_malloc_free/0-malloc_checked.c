#include "main.h"
#include <stdlib.h>

/*
 * File: source_0-file.c
 * Author: Muhannad Gsgs
 */

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, terminates the process with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
